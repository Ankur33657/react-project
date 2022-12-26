// Programe to check whether given character is vowel or not..
#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character to check"<<endl;
    cin>>a;
    if((a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u') ){
        cout<<"This character is vowel"<<endl;
    }
    else
    cout<<"This is not a vowel"<<endl;

}