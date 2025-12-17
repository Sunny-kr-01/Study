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

class Stack{
    int capacity;
    int size;
    node* head;
public:
    Stack(int c){
        this->head=NULL;
        this->capacity=c;
        size=0;
    }
    void push(int val){
        if(size==capacity){
            cout<<"Overflow";
        }
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            this->size++;
            return;
        }
        new_node->next=head;
        head=new_node;
        this->size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Underflow";
        }
        node* temp=head;
        head=head->next;
        delete temp;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Empty\n";
            return -1;
        }
        return head->value;
    }
    int Size(){
        return size;
    }
    bool is_empty(){
        return head==NULL;
    }
    bool is_full(){
        return size==capacity;
    }
};

int main(){
    Stack st1(7);
    st1.push(0);
    st1.push(1);
    st1.push(2);
    cout<<st1.top();
    st1.push(3);
    st1.push(4);
    cout<<st1.Size();



    return 0;
}