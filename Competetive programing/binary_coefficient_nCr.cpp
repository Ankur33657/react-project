//Formate nCr
#include <iostream>
int facto(int num){
    int a=1;
    for(int i=1;i<=num;i++){
        a*=i;
    }
    return a;
}
using namespace std;
int main(){
    int n,r,z;
    cout<<"Input"<<endl;
    cin>>n>>r;
    z= (facto(n)/(facto(n-r)*facto(r)));
    cout<<z<<endl;


}