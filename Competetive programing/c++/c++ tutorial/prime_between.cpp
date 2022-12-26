#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the starting and end value:"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int c=0;
        for(int j=2;j<=i/2;j++){
        if(i%j==0){
            c=1;
            break;
        }
        }
        if(c==0){
            cout<<i<<" ";
        }
    }
}