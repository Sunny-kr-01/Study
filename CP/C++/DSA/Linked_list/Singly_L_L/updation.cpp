#include <iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(){

    }

    node(int val){
        value=val;
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
    temp->next=new_node;  //new_node ke next me NULL hi hoga as constructor...
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insert(node* &head,int ele,int pos){
    if(pos==0) {
        insert_head(head,ele);
        return;
    }
    node* temp=head;
    node* new_node= new node(ele);
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
        
}

void update(node* &head,int ele,int pos){
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos){
        temp=temp->next;
        curr_pos++;
    }
    temp->value=ele;
}


int main(){
node* head =NULL;
insert_head(head,2);
print(head);
insert_head(head,1);
insert_head(head,0);
print(head);
insert_tail(head,5);
print(head);
insert(head,4,3);
print(head);
insert(head,3,3);
print(head);
insert(head,7,0);
print(head);
update(head,-1,0);
print(head);
    return 0;
}