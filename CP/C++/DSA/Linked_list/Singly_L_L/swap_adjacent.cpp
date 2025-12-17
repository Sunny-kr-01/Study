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
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
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
};

node* swap_adjacent(node* head){
    if(head==NULL || head->next==NULL) return head;
    node* second=head->next;
    head->next=swap_adjacent(second->next);
    second->next=head;
    return second;
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
L1.display();
L1.head=swap_adjacent(L1.head);
L1.display();
    return 0;
}