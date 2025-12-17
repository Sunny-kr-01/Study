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
    LinkedList (){
        head=NULL;
    }

    void insert_tail(int val){
        node* new_node= new node(val);
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
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void delete_alternate(node* &head){
    node* curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        node* temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        curr_node=curr_node->next;
        delete temp;
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
L1.display();
delete_alternate(L1.head);
L1.display();
    return 0;
}