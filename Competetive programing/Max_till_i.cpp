#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array entered are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Maximum Till i :"<<endl;
    
        int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            cout<<arr[i]<<" ";
            max=arr[i];
        }
        else
        cout<<max<<" ";
    }
}