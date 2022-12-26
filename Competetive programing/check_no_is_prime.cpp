#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter Number"<<endl;
 cin>>n;
 int a=0;
 for(int i=2;i<(n/2);i++){
  if(n%i==0){
      a=1;
      break;
  }
 }
 if(a==0){
     cout<<"Prime number"<<endl;
 }
 else
 cout<<"Not a Prime"<<endl;
}