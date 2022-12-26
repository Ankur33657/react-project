#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the starting and end point:"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int c=10;
        cout<<"Table of "<<i<<" in reverse order is:"<<endl;
        while(c>0){
        cout<<i<<" * "<<c<<" = "<<i*c<<endl;
        c--;
        }
    }
}