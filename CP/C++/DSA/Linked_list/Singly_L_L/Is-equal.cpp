#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;
    node(int value){
        this->value=value;
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

bool is_equal(node* head1,node* head2){
    node* temp1=head1;
    node* temp2=head2;
    while(true){
        if(temp1->value!=temp2->value) return false;
        if((temp1->next!=NULL && temp2->next==NULL) || (temp1->next==NULL && temp2->next!=NULL)) return false;
        if(temp1==NULL && temp2==NULL) return true;
        temp1=temp1->next;
        temp2=temp2->next;
    }
}

int main(){
LinkedList L1,L2;
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L2.insert_tail(2);
L2.insert_tail(1);
L2.insert_tail(3);
L2.insert_tail(4);
if (is_equal(L1.head,L2.head)) cout<<"TRUE";
else cout<<"FALSE";

    return 0;
}