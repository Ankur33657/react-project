// printing armstome numbers..
#include <iostream>
#include <math.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    while(n>0){
        int i = n%10;
        sum += pow(i,3);
        n= n/10;
    }
    if(a==sum){
        cout<<"Armstrome no"<<endl;
    }
    else
    cout<<"NOt Armstrome"<<endl;

}