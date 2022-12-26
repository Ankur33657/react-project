//Need to optimize
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[0]>arr[1]){
             ans++;
             mx=arr[0];
            }   
        }
        else if(i==n){
            if(arr[n]>arr[n-1]){
                ans++;              
            }
        }
        else
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
            mx=arr[i];
        }
    }
    cout<<"Answer= "<<ans;
}