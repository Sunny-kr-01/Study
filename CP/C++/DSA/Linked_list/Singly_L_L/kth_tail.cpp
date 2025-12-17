#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;
    node(int val){
        this->value=val;
        this->next=NULL;
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

int kth_tail(node* head,int k){
    node* ptr=head;
    node* tail=head;
    while(k!=1){
        tail=tail->next;
        k--;
    }
    while(tail->next!=NULL){
        tail=tail->next;
        ptr=ptr->next;
    }
    return ptr->value;
}

int main(){
LinkedList L1;
int n;
cout<<"Enter the no. of elements : ",cin>>n;
cout<<"Enter the elements :\n";
while(n){
    int temp;
    cin>>temp;
    L1.insert_tail(temp);
    n--;
}
L1.display();
int k;
cout<<"Enter k : ",cin>>k;
cout<<kth_tail(L1.head,k);
    return 0;
}