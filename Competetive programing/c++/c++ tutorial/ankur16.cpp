//programe on HCF
// why the problem in code unable to understand...
/*#include <iostream>
using namespace std;
void  HCF(int *x , int *y){
    int temp;
   while(*x%*y!=0){
        temp = *x;
        *x = *x % *y;
        *y = temp;
    }
}
int main(){
    int a ,b;
    cout<<"Enter the two Numbwer"<<endl;
    cin>>a>>b;
    HCF(&a,&b);
    cout<<"hcf is "<<a<<endl;
}*/
    
   //Another method of solving the problem of HCf
   /* Instead of divide the content at one go, we can simply divede into multiple step*/
   #include <iostream>
   using namespace std;
   int HCF(int a , int b){
       if(a==0){
           return b;
       }
       else if(b==0){
           return a;
       }
       else if(a==b){
           return a;
       }
       else if(a>b){
           return  HCF((a-b), b);
       }
       else{
           return HCF(a , (b-a));
       }
   }
   int main(){
       int a,b;
       cout<<"Enter the two number to find its Hcf"<<endl;
       cin>>a>>b;
       HCF(a,b);
       cout<<"The hcf is "<<HCF(a,b)<<endl;
   }


