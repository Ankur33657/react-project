//Shorting of an array by selection shorting..
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //shorting method
    for(int i=0;i<n-1;i++){
       for(int j=1+i;j<n;j++){
           if(arr[j]<arr[i]){
               int temp= arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}