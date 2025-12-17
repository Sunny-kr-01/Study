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
    void insert(int val,int pos){
        node* new_node=new node(val);
        node* temp=head;
        if(pos==1){
            insert_head(val);
            return;
        }
        pos--;
        while(--pos){
            temp=temp->next;
        }
        node* next_ptr=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next=next_ptr;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
DoublyLinkedList L1;
L1.insert_head(0);
L1.insert(1,1);
L1.insert(2,2);
L1.insert(3,3);
L1.display();

    return 0;
}