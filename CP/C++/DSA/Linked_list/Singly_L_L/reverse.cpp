#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int val){
        this->value=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    node * head;
    LinkedList(){
       head=NULL; 
    }
    void insert_tail(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void reverse(node* &head){
    node* previous=head;
    node* curr=previous->next;
    node* aage=curr->next;
    previous->next=NULL;
    while(curr->next!=NULL){
        curr->next=previous;
        previous=curr;
        curr=aage;
        aage=aage->next;
    }
    curr->next=previous;
    head=curr;
}

int main(){
LinkedList L1;
int n;
cout<<"Enter no.of inputs : ",cin>>n;
cout<<"Enter the values :\n";
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    L1.insert_tail(temp);
}
L1.display();
reverse(L1.head);
L1.display();

    return 0;
}