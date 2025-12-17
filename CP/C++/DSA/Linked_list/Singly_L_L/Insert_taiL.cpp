#include <iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(){

    }

    node(int val){
        value=val;
        next=NULL;
    }
};

void insert_tail(node* &head,int val){
    node* new_node=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
//  node* head=NULL;   or   node*= new node(); infinite loop or nothing
node* head=new node(0);
print(head);
insert_tail(head,1);
print(head);
insert_tail(head,2);
print(head);
insert_tail(head,3);
print(head);
insert_tail(head,4);
print(head);


    return 0;
}