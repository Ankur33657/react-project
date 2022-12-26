#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
Node*createlist(int num){
    Node*head=NULL;
    Node*ans;
    while(num--){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    Node*newnode=new Node(data);
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


int main(){
    
    cout<<"List 1"<<endl;
Node*head1=createlist(5);
    cout<<"List 2"<<endl;
Node*head2=createlist(7);
cout<<"Printing data of list1"<<endl;
printing(head1);
cout<<endl;
cout<<"Printing data of list2"<<endl;
printing(head2);
}