//0,1,1,2,3....
#include <iostream>
using namespace std;
int fibo(int num){
    if(num==1){
        return 0;
    }
    else if(num==2 || num==3){
        return 1;
    }
    else
    return (fibo(num-1)+ fibo(num-2));
}
int main(){
    int n;
    cout<<"input"<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;

}