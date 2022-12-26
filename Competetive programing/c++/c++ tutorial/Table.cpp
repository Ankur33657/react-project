#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter starting point & end point"<<endl;
cin>>a>>b;
for(int i=a;i<=b;i++){
    int c=1;
    cout<<"Table of "<<i<<" is:"<<endl;
    while(c<=10){
    cout<<i<<"*"<<c<<"="<<i*c<<endl;
    c++;
    }
}
}