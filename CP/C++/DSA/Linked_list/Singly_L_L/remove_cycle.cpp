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

bool is_cycle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

void remove_cycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
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
L1.head->next->next->next->next->next->next->next->next=L1.head->next->next->next;
if(is_cycle(L1.head)){
    cout<<"YES";
    remove_cycle(L1.head);
}
else cout<<"NO";
cout<<endl;
if(is_cycle(L1.head)){
    cout<<"YES";
    remove_cycle(L1.head);
}
else cout<<"NO";
    return 0;
}