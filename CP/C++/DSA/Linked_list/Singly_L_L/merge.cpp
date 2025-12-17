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

node* merge(node* head1,node* head2){
    node* head;
    if(head1->value<head2->value){
        head=head1;
        head1=head1->next;
    }
    else {
        head=head2;
        head2=head2->next;
    }
    node* new_head=head;

    while(head1!=NULL && head2!=NULL){
        if(head1->value<head2->value){
        head->next=head1;
        head1=head1->next;
        head=head->next;
        }
        else{
            head->next=head2;
            head2=head2->next;
            head=head->next;
        }
    }

    while(head1!=NULL){
        head->next=head1;
        head1=head1->next;
        head=head->next;
    }

    while(head2!=NULL){
        head->next=head2;
        head2=head2->next;
        head=head->next;
    }

    return new_head;
}

int main(){
LinkedList L1,L2;
int n;
cout<<"ËNter the no. of elements for 1st : ",cin>>n;
cout<<"Enter the elements for 1st :\n";
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    L1.insert_tail(temp);
} 
cout<<"ENter the elements for 2nd : ",cin>>n;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    L2.insert_tail(temp);
}
L1.display();
L2.display();
LinkedList L3;
L3.head=merge(L1.head,L2.head);
L3.display();

    return 0;
}