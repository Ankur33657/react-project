// To check whether the number is prime or not??
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i!=0){
            cout<<" prime number "<<endl;
        }
        else
        cout<<"Not a prime no"<<endl;
        break;
    }
}