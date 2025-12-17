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

void insert_head(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}

void insert_tail(node* &head,int val){
    node* new_node=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert(node* &head,int pos,int val){
    if(pos==0){
        insert_head(head,val);
        return;
    }
    node* new_node=new node(val);
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;

}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void Delete_head(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}

void Delete_tail(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;  //using dlete instead of free()
    temp->next=NULL;
}

void Delete(node* & head,int pos){
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    free(del);
}

int main(){
node* head=new node(2);
print(head);
insert_head(head,1);
print(head);
insert_head(head,0);
print(head);
insert_tail(head,5);
print(head);
insert(head,3,4);
print(head);
insert(head,3,3);
print(head);
Delete(head,4);
print(head);
Delete_head(head);
print(head);
Delete_tail(head);
print(head);
    return 0;
}