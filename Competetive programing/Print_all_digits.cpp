// Doubt in Printing digits from left to roght
#include<iostream>
using namespace std;
int main(){
    int n,a,c;
    cout<<"Enter the number"<<endl;
    cin>>n;
    c=n;
    int b=0;
    cout<<"Numbers in reverse order"<<endl;
    while(n>0){
         a=n%10;
         cout<<a<<" ";
         n=n/10;
         b++;
    }
    cout<<endl;
   int arr[b-1];
   while(c>0){
       arr[b-1]=c%10;
       b--;
       c=c/10;
   }
   cout<<"The numbers digits are:"<<endl;
   for(int i=0;i<b;i++){
       cout<<arr[i]<<" ";
   }
}