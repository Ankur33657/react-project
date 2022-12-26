//programe to generate table of no. enter by the user
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the for which you wants its Table"<<endl;
    cin>>a;
    for (int i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
}