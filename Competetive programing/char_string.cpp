//Error in code....
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size"<<endl;
    cin>>n;
    char arr[n];
    cin.getline(arr,n);
    cin.ignore();
    int ans=0,mx=0;
    int index_ans=0,index_mx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!= ' ' || arr[i]=='\0'){ 
          mx++;
          ans=max(ans,mx);
          index_ans=index_mx;
        }
        else
        mx=0;
        index_mx=i+1;
    }
    cout<<ans<<endl;
    for(int j=0;j<ans;j++){
        cout<<arr[j+index_ans];
    }

}