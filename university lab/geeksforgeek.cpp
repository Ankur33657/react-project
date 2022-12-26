#include <iostream>
using namespace std;
int main(){
        int a=0;
    
    for(int i=10000;i<=99999;i++){
        int w=i;
        int sum=0;
        while(w>0){
            int z=w%10;
            sum+=z;
            w=w/10;
        }
        if(sum==7){
            a++;
        }
    }
    cout<<a<<endl;
}