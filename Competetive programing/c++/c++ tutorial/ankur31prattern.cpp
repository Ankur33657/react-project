/*    12345
      1234
      123
      12
      1         */
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want"<<endl;
    cin>>a;
    for(int i=0;i<a;i++){
        int count = 1;
       for(int j=1;j<=(a-i);j++){
           cout<<count;
           count++;
       }
       cout<<endl;
    }
}      