//programe to find the largest among three numbers..
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if((a>b) && (a>c)){
        cout<<a<<"is the greatest"<<endl;    
    }
    else if((b>a) && (b>c)){
        cout<<b<<"is the greatest"<<endl;
    }
    else if((c>a) && (c>b)){
        cout<<c<<"is the greatest"<<endl;
    }
    else
    cout<<"It might be repeating greatest number"<<endl;
}