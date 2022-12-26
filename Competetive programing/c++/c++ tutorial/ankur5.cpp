// Programing for swaping two numbers
#include <iostream>
using namespace std;
int main(){
    //Using three variables
    int a,b,c;
    cout<<"Enter the 1st and 2nd variable"<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Now the value of a is "<<a<<endl<<"The value of b is "<<b<<endl;

    //Again the same programing using no third variable which swap the nos. of above value ie- to original value ...
    a=a+b;//let a =2 and b=5 using this we obtain 7
    b=a-b;//7-5=2 the result same as a
    a=a-b; // 7-2 =5 equal to b
    cout<<"The new value a is "<<a<<endl<<"The new value of b is "<<b<<endl;

}