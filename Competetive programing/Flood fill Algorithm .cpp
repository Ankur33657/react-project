// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    void solve(vector<vector<int>>&image,int x,int y,int sr,int sc,int newcolor,int oldcolor,vector<vector<int>>visited){
        if((sr<0 && sr>=x) && (sc<0 && sc>=y) )return;
        if(visited[sr][sc]==1 || image[sr][sc]!=oldcolor)return;
        visited[sr][sc]=1;
        image[sr][sc]=newcolor;
        solve(image,x,y,sr-1,sc,newcolor,oldcolor,visited);
        solve(image,x,y,sr+1,sc,newcolor,oldcolor,visited);
        solve(image,x,y,sr,sc-1,newcolor,oldcolor,visited);
        solve(image,x,y,sr,sc+1,newcolor,oldcolor,visited);
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int x=image.size();
       int y=image[0].size();
       vector<vector<int>>visited(x,vector<int>(y,0));
       int oldcolor=image[sr][sc];
       solve(image,x,y,sr,sc,newColor,oldcolor,visited);
       return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends