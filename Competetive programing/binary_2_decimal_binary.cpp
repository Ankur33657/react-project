    //Error in conversion of decimal into binary...
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter nos of digits of binary"<<endl;
    cin>>a;
    int arr[a];
    cout<<"Enter the Binary number"<<endl;
    for(int i=0;i<a;i++){
     cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
    int b=pow(2,(a-(i+1)));
    sum = sum +  arr[i]*b;
    }
    cout<<"The nos in decimal form is "<<sum<<endl;
    int arr1[a];
    while(sum==0){
    arr1[a]=sum%2;
    a--;
    sum=sum/2;  
    cout<<sum<<" ";
    }
    cout<<"The Binary form of the number is "<<endl;
    for(int i=0;i<a;i++){
        cout<<arr1[i]<<" ";
    }


}
