/*
5 4                       0---3
0 1                      / \
0 2                     1  2
0 3                        |
2 4                        4
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
         vector<int>ans;
        vector<int>vis(V,0);
        queue<int>q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        
        return ans;
    }
      void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&ans){
        ans.push_back(node);
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>ans;
        vector<int>vis(V,0);
        dfs(0,vis,adj,ans);
        return ans;
        
    }
    
};
int main() {
        cout<<"Enter vertex and Edges"<<endl;
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];
        
        for (int i = 0; i < E; i++) {
            cout<<"Edges from u->v"<<endl;
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        Solution obj;
        cout<<"BFS travelsal as:"<<endl;
        vector<int> BFS = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < BFS.size(); i++) {
            cout << BFS[i] << " ";
        }
        cout << endl;
        cout<<"DFS travelsal as:"<<endl;
         vector<int> DFS = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < DFS.size(); i++) {
            cout << DFS[i] << " ";
        }
    
    return 0;
}

