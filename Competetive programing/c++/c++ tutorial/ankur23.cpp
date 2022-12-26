// It print all the prime number upto the number entered by the user..
//Some logic is missing....
#include <iostream>
#include<cmath>
using namespace std;
bool prime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}
    