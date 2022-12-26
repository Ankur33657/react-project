#include <iostream>
using namespace std;
#define ll long long int 
int fibbo(int z){
    if((z==1) || (z==2)){
        return 1;
    }
    else
    return (fibbo(z-1) + fibbo(z-2));
}
int main(){
    ll n;
    cout<<"up to What series of Fibbo you want "<<endl;
    cin>>n;
    ll arr[n];
    cout<<"The fibbonachi series upto "<<n<<" th place is "<<endl;
    for(int i=1;i<=n;i++){
        ll b= fibbo(i);
        cout<<b<<" ";
        arr[i-1]=b;
    }
    cout<<endl;
    cout<<"The missing value of fibbonachi Series is: "<<endl;
    for(int j=1;j<fibbo(n);j++){
        int d=0;
        for(int k=0;k<n;k++){
            if(j==arr[k]){
              d=1;  
            }
        }
        if(d==0){
            cout<<j<<" ";
        }
    }
    cout<<endl<<"Name-Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;   
}