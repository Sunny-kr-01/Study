#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;
    node* prev;
    node(int val){
        value=val;
        next=NULL;
        prev=NULL;
    }
};

class DoublyLinkedList{
public:
    node* head;
    node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insert_tail(int val){
        node* new_node=new node(val);
        if(tail==NULL){
            tail=new_node;
            head=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void insert_head(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }

};

int main(){
DoublyLinkedList L1;
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_head(0);
cout<<L1.tail->prev->prev->value;
    return 0;
}