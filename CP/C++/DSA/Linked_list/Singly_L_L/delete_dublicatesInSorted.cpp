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

void delete_dublicate(node* &head){
    node* curr_node=head;
    while(curr_node->next!=NULL && curr_node!=NULL){
        if(curr_node->value==curr_node->next->value){
            node* temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            delete temp;
        }
        else  curr_node=curr_node->next;
    }
}

int main(){
LinkedList L1;
L1.insert_tail(0);
L1.insert_tail(1);
L1.insert_tail(1);
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L1.insert_tail(4);
L1.insert_tail(5);
L1.display();
delete_dublicate(L1.head);
L1.display();
    return 0;
}