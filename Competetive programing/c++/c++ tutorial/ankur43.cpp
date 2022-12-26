/* Noted down the prime number between two given number...*/
#include <iostream>
using namespace std;
bool IsPrime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0)
        return false;
    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter the two end point of a number"<<endl;
    cin>>a>>b;
    int count =0;
    for(int i=a;i<=b;i++){
    int Prime_no_between = IsPrime(i);
    if(Prime_no_between){
        cout<<i<<" ";
        count++;
    }
    }
    cout<<endl<<"There are "<<count<<" numbers of Prime number between "<<a<<" and "<<b<<endl;
}