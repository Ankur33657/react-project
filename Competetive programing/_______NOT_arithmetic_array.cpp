//Error
#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0,max=0;

    int cd= arr[1]-arr[0];
    for(int i=1;i<n-1;i++){
        d=arr[i]-arr[i-1];
        if(d==cd){
            a++;
            if(a>max){
                max=a;
            }
        }
        else{
             cd=d;
            a=0;
           
        }
       
    }
    cout<<"No of airthematic array is "<<max+1<<endl;


}