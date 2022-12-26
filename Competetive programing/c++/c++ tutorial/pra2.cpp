//binary to decimal..
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the bits of binary numbers"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the binary digit one by one "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=n;j>=0;j--){
        a=arr[j];
        if(a==1){
        sum=sum + pow(2,(n-j)) ;
        cout<<sum<<endl;
        }
    }
    cout<<"The number in decimal form is "<<sum<<endl;
   
   
}
