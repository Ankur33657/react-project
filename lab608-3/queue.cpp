#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};
Node* createLinkedList(int num){
    Node*head=NULL;
    Node*ans;
    while(num--){
    cout<<"Enter the data"<<endl;
    int dt;
    cin>>dt;
    Node*newnode=new Node(dt);
    if (head==NULL){
        head=newnode;
        ans=head;
    }
    else{
        head->next=newnode;
        head=head->next;
    }
    }
    return ans;
}
void printing(Node*head){
    Node*tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<"->";
        tmp=tmp->next;
    }
}
Node* queuePush(Node*head,int element){
    Node*tmp=head;
    while(tmp->next!=NULL){
     tmp=tmp->next;
    }
    Node*newnode=new Node(element);
    tmp->next=newnode;
    return head;
}
Node*pop(Node*head){
   head=head->next;
   return head;
}
void front(Node*head){
    cout<<head->data<<endl;
}
int main(){
Node* n1=createLinkedList(5);
cout<<"Printing of data"<<endl;
printing(n1);
Node* n2=queuePush(n1,25);
cout<<endl<<"Printing after push operation"<<endl;
printing(n2);
Node*n3=pop(n2);
cout<<endl<<"printing after pop operation"<<endl;
printing(n3);
cout<<endl<<"Front element is"<<endl;
front(n3);
}