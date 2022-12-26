// Conversion of decimal to binary
#include <iostream>
using namespace std;
int main(){
    int arr[8];
    cout<<"Enter the number"<<endl;
    int n;
    int a=n;
    cin>>n;
    int i=0;
    while(n>0){
           int a=n%2;
           arr[i]=a;
           i++;
        n=n/2;
    }
    cout<<"The binary represrntation of "<<a <<"is "<<endl;
    for(int j=i;j>=0;j--){
        cout<<arr[j]<<" ";
    } 

}
