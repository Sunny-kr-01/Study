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

node* mid(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast->next->next!=NULL && fast->next!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* temp=slow->next;
    slow->next=NULL; 
    return temp;
}

node* reverse(node* &head){
node* prev=NULL;
node* curr=head;
while(curr!=NULL){
    node* agla=curr->next;
    curr->next=prev;
    prev=curr;
    curr=agla;
}
return prev;
}

bool is_palindrome(node* &head){
    node* new_head=mid(head);
    node* reversed=reverse(new_head);
    node* temp1=head;
    node* temp2=reversed;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->value!=temp2->value) return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}

int main(){
LinkedList L1;
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(3);
L1.insert_tail(2);
L1.insert_tail(1);
L1.display();
if(is_palindrome(L1.head))cout<<"YES";
else cout<<"NO";
    return 0;
}