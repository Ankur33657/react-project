#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,d,z;
    cout<<"Enter the digit of the number"<<endl;
    cin>>d;
    cout<<"Enter the number"<<endl;
    cin>>n;
    z=n;
    int sum=0;
    while(n>0){
        int a=n%10;
        a=pow(a,d);
        sum+=a;
        n=n/10;
    }
    if(sum==z){
        cout<<"Armstome number"<<endl;
    }
    else
    cout<<"Not"<<endl;

}