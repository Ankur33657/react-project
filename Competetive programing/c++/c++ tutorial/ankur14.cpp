//programe of fibbonachi series..
#include <iostream>
using namespace std;
int Fibbo(int n){
    if ((n==1)  || (n==2)){
        return 1;
    }
    else 
    return (Fibbo(n-1) + Fibbo(n-2));
}
int main(){
    int a;
    cout<<"Enter the nth order of Fibbonachi series"<<endl;
    cin>>a;
    Fibbo(a);
    cout<<"The "<<a<<" Series of Fibbonachi series is "<<Fibbo(a)<<endl;
    
    
}