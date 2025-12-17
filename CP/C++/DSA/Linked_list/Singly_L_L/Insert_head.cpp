#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int value){
        this->value=value;
        this->next=NULL;
    }


};

    
void insert_head(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
node* head=NULL;
insert_head(head,2);
print(head);
insert_head(head,1);
print(head);
insert_head(head,0);
print(head);
    return 0;
}