/*   11111
     2222
     333
     44
     5        */
#include <iostream>
using namespace std;
int main(){
    int a,count=1;
    cout<<"Enter Input"<<endl;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=1;j<=(a-i);j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    
}     