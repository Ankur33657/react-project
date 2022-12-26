#include<bits/stdc++.h>
using namespace std;
 int front=0;
 int rear=0;
   int arr[10];
void push(int num){
    arr[rear]=num;
    rear++;
}
void pop(void){
  front++;
}
void quee(void){
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //Linear queue using linear array
    push(5);
    push(6);
    push(25);
    cout<<"Queue looks like:"<<endl;
    quee();
    pop();
    cout<<"Queue after pop out"<<endl;
    quee();
}