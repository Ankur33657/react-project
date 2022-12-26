/*  1
    22
    333
    4444
    55555    */
#include<iostream>
using namespace std;
int main(){
    int a, count =1;
    cout<<"Enter the no upto which rown required the pattern:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
}    