#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int val){
        this->value=val;
        next=NULL;
    }
};

class LinkedList{
public:
    node* head;
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

node* reverse_k(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    int count=0;
    while(count!=k && curr!=NULL){
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
    }
    if(curr!=NULL){
        node* new_head=reverse_k(curr,k);
        head->next=new_head;}
    return prev;
}

int main(){
LinkedList L1;
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L1.insert_tail(5);
L1.insert_tail(6);
L1.display();
int k;
cout<<"Enter K : ",cin>>k;
L1.head=reverse_k(L1.head,k);
L1.display();
    return 0;
}