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

void group(node* &head){
    node* prev_even=head;
    node* new_start=head->next;
    node* prev_odd=head->next;
    node* odd=head->next->next;
    while(prev_odd!=NULL && odd!=NULL){
        prev_odd->next=odd->next;
        prev_odd=odd->next;
        odd->next=new_start;
        prev_even->next=odd;
        prev_even=odd;
        odd=prev_odd->next;
        //
    }
}

int main(){
LinkedList L1;
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
L1.insert_tail(11);
L1.insert_tail(12);
L1.display();
group(L1.head);
L1.display();
    return 0;
}