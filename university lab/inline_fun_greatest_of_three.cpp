#include<iostream>
using namespace std;
inline int greatest(int a,int b,int c){
return a>b?(a>c?a:c):(b>c?b:c);
};
int main(){
int x,y,z;
cin>>x>>y>>z;
cout<<greatest(x,y,z);
}