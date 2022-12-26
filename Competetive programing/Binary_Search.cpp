#include <iostream>
using namespace std;
int main(){
    int n,z,m;
   int  l=0,c=0;
    cout<<"Enter"<<endl;
    cin>>n;
    int r=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Shorting
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Binary Search
    cout<<"Enter Search Elements"<<endl;
    cin>>z;
     
    for(int i=0;i<n;i++){
        m=(l+r)/2;
    if(arr[i]>arr[m]){
        l=m+1;
       
    }
    else if(arr[i]<arr[m]){
    r=m-1;
   
    }
    else if(arr[i]==arr[m]){
    cout<<"Found"<<endl;
    c=1;
    break;
    }
    }
    if(c==0){
        cout<<"Not Found"<<endl;
    }

   
}