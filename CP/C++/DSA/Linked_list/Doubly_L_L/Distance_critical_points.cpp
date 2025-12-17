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
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insert_tail(int val){
        node* new_node=new node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
};

void critical_pts(node* &head){
    int res[]={-1,-1};
    node* ptr=head->next;
    int curr=0;
    int prev=0;
    int initial=0;
    int total=0;
    while(ptr->next!=NULL){
        if((ptr->value<ptr->prev->value && ptr->value<ptr->next->value) || (ptr->value>ptr->prev->value && ptr->value>ptr->next->value)){
            total++;
            if(total==1){
                initial=curr;
                prev=curr;
            }
            if(total>1){
                if(res[0]>curr-prev || res[0]==-1)res[0]=curr-prev;
                prev=curr;
                res[1]=curr-initial;
            }
        }
        curr++;
        ptr=ptr->next;
    }
    cout<<res[0]<<" "<<res[1];
}

int main(){
DoublyLinkedList L1;
L1.insert_tail(2);
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(2);
L1.insert_tail(7);
L1.insert_tail(6);
L1.insert_tail(8);
L1.insert_tail(6);
L1.display();
critical_pts(L1.head);

    return 0;
}