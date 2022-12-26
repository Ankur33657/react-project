// Programe to check whether leap year or not
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the year"<<endl;
    cin>>a;
    if(a%4==0){
        if(a%400==0){
            cout<<"Leap year";
        }
        else if(a%100==0){
            cout<<"Not a leap year";
        }
        else 
        cout<<"Leap year";
    }  
    else
    cout<<"Not a leap year";
}