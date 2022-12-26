#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Max=arr[0];
    int Min=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
        if(arr[i]<Min){
            Min=arr[i];
        }
        sum+=arr[i];
    }
    cout<<"Max from array list "<<Max<<endl<<"Min from List "<<Min<<endl;
    cout<<"Sum = "<<sum<<endl;
   
}