#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;
    node(int val){
        value=val;
        next=NULL;
    }
};
//make it better..k can be >=n also..question is not this.. tail element is supposed to rotate k times,,
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

void right_k(node* &head,int k){
    node* new_tail=head;
    while(--k){
        new_tail=new_tail->next;
    }
    node* new_head=new_tail->next;
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    new_tail->next=NULL;
    head=new_head;
}

int main(){
LinkedList L1;
L1.insert_tail(0);
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L1.insert_tail(5);
L1.insert_tail(6);
L1.insert_tail(7);
L1.display();
int k;
cout<<"Enter k : ",cin>>k;
right_k(L1.head,k);
L1.display();
    return 0;
}