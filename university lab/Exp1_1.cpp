#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cout<<"Enter the marks of "<<i+1<<"  th Subject "<<endl;
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The avarage marks of 5 subjects is "<<(float)sum/5<<endl;
    cout<<"Name- Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;
}