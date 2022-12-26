#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int N=10;
    int b[N];
    int minidx =INT_MAX;
    for(int i=0;i<N;i++){
        b[i]=-1;
    }
    for(int i=0;i<n;i++){
       if(b[a[i]]!= -1){
           minidx=min(minidx,b[a[i]]);
       }
       else
       b[a[i]]=i;
    }
    cout<<"Answer ie- Lower index repeating"<<minidx+1<<endl;
}