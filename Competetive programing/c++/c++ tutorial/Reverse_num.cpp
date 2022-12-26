#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    int c =0;
    int e =a;
    int d=a;
    while(a>0){
    int r=a%10;
    c++;
    a= a/10;
    }
    int sum=0;
    while(d>0){
    int r=d%10;
    sum+=r*pow(10,(c-1));
    c--;
    d=d/10;
    }
    cout<<"The Reverse of number is "<<sum<<endl;
    //For Pallodroime
    if(e==sum){
        cout<<"Pallodroime"<<endl;
    }
    else 
    cout<<"NOt Pallodroime"<<endl;
    
}