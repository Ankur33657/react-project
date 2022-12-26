//Programe to calculating the amount given by the bank...
#include <iostream>
using namespace std;
class Bank{
 int principal;
 int year;
 float rate;
 float interest;
 float amount;
 public:
 void getdata(int p,int y,float r){
    principal = p;
    year = y;
    rate = r/100;
   amount = principal;
   for(int i=0;i<year;i++){
    interest = (principal*year*rate);
    amount += interest;
    principal =amount;
   }
 }
 void showdata(){
     cout<<"Amount value: "<<amount<<endl;
 }
};
int main(){
    int a,b;
    float c;
    cout<<"Enter principal,year and rate to calculate net amount:\n Note: Rate in float value"<<endl;
    cin>>a>>b>>c;
Bank b1;
b1.getdata(a,b,c);
b1.showdata();
}