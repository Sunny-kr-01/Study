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
    void display(){
        node* temp=head;
        cout<<"NULL"<<"<-";
        while(temp->next!=NULL){
            cout<<temp->value<<"<->";
            temp=temp->next;
        }
        cout<<temp->value<<"->"<<"NULL"<<endl;
    }
    void update(int val,int pos){
        node* temp=head;
        while(--pos){
            temp=temp->next;
        }
        temp->value=val;
    }
    void del_head(){
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
    }
    void del_tail(){
        node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
    }
    void erase(int pos){
        if(pos==1){
            del_head();
            return;
        }
        node* temp=head;
        pos--;
        while(--pos){
            temp=temp->next;
        }
        if(temp->next==tail){
            del_tail();
            return;
        }
        node* del_ele=temp->next;
        temp->next=temp->next->next;
        temp->next->prev=temp;
        delete del_ele;
    }
};

bool is_palindrome(node* head,node* tail){
    while(head!=tail && head->prev!=tail){
        if(head->value!=tail->value) return false;
        head=head->next;
        tail=tail->prev;
    }
    return true;
}

int main(){
DoublyLinkedList L1;
L1.insert_tail(0);
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(2);
L1.insert_tail(1);
L1.insert_tail(0);
L1.display();
if(is_palindrome(L1.head,L1.tail)) cout<<"YEs";
else cout<<"NO";
    return 0;
}