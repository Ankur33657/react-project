//Display all the factors of n...
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            cout<<i<<" ";
        }
    }
}     