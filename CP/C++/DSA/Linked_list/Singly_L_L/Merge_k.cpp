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
    LinkedList new_head;
    if(head1->value<head2->value){
       new_head.insert_tail(head1->value);
       head1=head1->next;
    }
    else{
        new_head.insert_tail(head2->value);
        head2=head2->next;
    }
    node* result=new_head.head;
    while(head1!=NULL && head2!=NULL ){
        if(head1->value<head2->value){ 
            result->next=head1;
            head1=head1->next;
        }
        else {
            result->next=head2;
            head2=head2->next;
        }
        result=result->next;
    }
    while(head1!=NULL){
        result->next=head1;
        head1=head1->next;
        result=result->next;
    }
    while(head2!=NULL){
        result->next=head2;
        head2=head2->next;
        result=result->next;
    }
    return new_head.head;
}

node* merge_k(vector<LinkedList> &v){
    LinkedList res=v[0];
    for(int i=1;i<v.size();i++){
        res.head=merge(res.head,v[i].head);
    }
    return res.head;
}


int main(){
int n;
cout<<"Enter the no. lists : ";
cin>>n;
vector<LinkedList> v(n);
cout<<"Enter the LinkedLists:\n";  
for(int j=0;j<n;j++){
    int m;
    cout<<"Enter the no. of nodes : ",cin>>m;
    cout<<"Enter the nodes :\n";
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        v[j].insert_tail(temp);
    }
}
cout<<"LinkedLists :\n";
for(int i=0;i<n;i++){
    v[i].display();
}
LinkedList res;
res.head=merge_k(v);
res.display();
    return 0;
}