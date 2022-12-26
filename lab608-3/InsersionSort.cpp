#include<bits/stdc++.h>
using namespace std;
void InsersionSort(int arr[],int n){
   
    for(int i=1;i<n;i++){
        int tmp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>tmp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
    cout<<"Sorted array looks like"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"Enter size of an array"<<endl;
    int x;
    cin>>x;
    int arr[x];
    cout<<"Enter the element of an array"<<endl;
    for(int i=0;i<x;i++){
      cin>>arr[i];
    }
    InsersionSort(arr,x);
}