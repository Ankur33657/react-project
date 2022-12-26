//Max of three numbers and minimum
//Asuming that the numbers are not repeated..
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest "<<endl;
        }
        else
        cout<<c<<" is greatest"<<endl;
    }
    else{
        if(b>c){
            cout<<b<<" is greatest"<<endl;
        }
        else
        cout<<c<<" is greatest"<<endl;
    }
    if((a<b) && (a<c)){
        cout<<"Minimum no is"<< a<<endl;
    }
    else if((b<a) && (b<c)){
        cout <<b<<" is minimum"<<endl;
    }
    else
    cout<<c<<" is minimum"<<endl;
}