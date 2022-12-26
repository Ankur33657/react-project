#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int w=0;w<2;w++){
         int n,a=0,i=0;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int arr[20];
    while(n>0){
        int z= n%10;
        a++;
        arr[i]=z;
        i++;
        n=n/10;
    }
    cout<<"The resultant number whose first and last digit swap is "<<endl;
    for(int j=0;j<a;j++){
        if(j!=0  && j<a/2){
         swap(arr[j],arr[a-(1+j)]);
        }
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    }
    cout<<"Name-Ankur Singh"<<endl<<"uid-21BCS2869"<<endl;
   
}