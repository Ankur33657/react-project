#include <iostream>
using namespace std;
bool prime(int num){
    for(int i=2;i<=(num/2);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int j=2;j<n;j++){
       if(prime(j)){
           cout<<j<<endl;
       }

    }
    
}