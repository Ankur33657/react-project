/*   1
     12
     123
     1234
     12345       */
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no. of rows you want"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        int count = 1;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
    cout<<endl;
    }
}     