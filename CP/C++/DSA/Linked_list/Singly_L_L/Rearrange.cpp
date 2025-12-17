//L0->L1->.....->l(n-1)->Ln       to      L0->Ln->L1->L(n-1)...
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

void rearrange(node* & head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* prev=slow;
    node* curr=slow->next;
    prev->next=NULL;
    while(curr!=NULL){
        node* agla=curr->next;
        curr->next=prev;
        prev=curr;
        curr=agla;
    }
    node* ptr1=head;
    node* ptr2=prev;
    int count=0;
    while(ptr1!=ptr2){
        node* temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;
    }
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
L1.insert_tail(8);
L1.insert_tail(9);
L1.insert_tail(10);
L1.display();
rearrange(L1.head);
L1.display();
    return 0;
}