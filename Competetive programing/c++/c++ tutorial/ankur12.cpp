// This programe based on calculating factorial of N entered by the user..
#include <iostream>
using namespace std;
int factorial(int b){
    if((b==0)  || (b==1))
    return 1;
    else
    return (b*factorial(b-1));
}
int main(){
     int a;
cout<<"Enter the no for which you want its factorial"<<endl;
cin>>a;
factorial(a);
cout<<"The value of factorial "<<a<<" is = "<<factorial(a)<<endl;
}