#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
            sum = sum +arr[k];
            }
        }
    }
    cout<<"Sum = "<<sum<<endl;
}