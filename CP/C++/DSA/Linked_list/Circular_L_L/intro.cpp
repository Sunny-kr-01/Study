#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;
    node* prev;

    node(int val){
        this->value=val;
        next=NULL;
        prev=NULL;
    }
};

class CircularLinkedList{
public:
    node* head;
    node* tail;
    CircularLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        node* temp=head;
        cout<<"<-";
        while(temp!=tail){
            cout<<temp->value<<"<->";
            temp=temp->next;
        }
        cout<<temp->value<<"->";
    }
    void insert_tail(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            tail->next=head;
            head->prev=tail;
        }
        tail->next=new_node;
        tail=new_node;
        tail->next=head;
        head->prev=tail;
    }
};

int main(){
CircularLinkedList L1;
L1.insert_tail(0);
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L1.insert_tail(5);
L1.display();

    return 0;
}