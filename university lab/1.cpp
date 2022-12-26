#include<iostream>
#include<string.h>
using namespace std;
struct Test{
    char str[20];
};
int main(){
    struct Test st1,st2;
    strcpy(st1.str,"Quiz");
    st2=st1;
    st1.str[0]='S';
    cout<<st2.str;
    
}