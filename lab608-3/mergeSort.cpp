#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int st,int mid,int end){
    int n1=mid-st+1;
    int n2=end-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[st+i];
    }
    for(int j=0;j<n2;j++){
        arr2[j]=arr[mid+1+j];
    } 
    int i=0;
    int j=0;
    int k=st;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    if(j>=n2){
        while(i<n1){
            arr[k++]=arr1[i++];
        }
    }
    else{
        while(j<n2){
            arr[k++]=arr2[j++];
        }
    }
}
  void mergesort(int arr[],int i,int j){
    if(i<j){ 
    int mid=(i+j)/2;
    mergesort(arr,i,mid);
    mergesort(arr,mid+1,j);
    merge(arr,i,mid,j);
    } 
}  
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}