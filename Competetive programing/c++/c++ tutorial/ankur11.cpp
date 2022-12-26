//calculating the sum of first N natural numbers...
#include <iostream>
using namespace std;
int sum_of_no(int x){
    int y =0; 
   while(x>=0){
    y += x;
    x--;
   }
   return y;
}
  
int main(){
    int a;
    cout<<"Enter the value of N to calculate the sum of first N natural numbers:"<<endl;
    cin>>a;
    sum_of_no(a);
    cout<<"The sum of first"<<a<<"Naturals numbers is"<<endl<<sum_of_no(a)<<endl;
}
//you can also apply
/* if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return (x + sum_of_no(x-1));
    } */