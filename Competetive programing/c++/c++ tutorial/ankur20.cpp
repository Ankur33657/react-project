// Reversing the number enter by the user
#include <iostream>
using namespace std;
void Reverse(int x){
    int i;
    int arr[i];
while(x != 0 ){
    arr[i] = x%10;
    cout<<arr[i];
    x = x/10;
}
}
int main(){
int a;
cout<<"Enter the numbers"<<endl;
cin>>a;
Reverse(a);
}