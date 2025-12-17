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

vector<vector<int>> target_sum(node* head,node* tail,int target){
    vector<vector<int>> res;
    while(head!=tail && head->prev!=tail){
        if(head->value+tail->value==target){
            res.push_back({head->value,tail->value});
            head=head->next;
            tail=tail->prev;
        }
        if(head->value+tail->value>target) tail=tail->prev;
        if(head->value+tail->value<target) head=head->next;
    }
return res;
}

int main(){
DoublyLinkedList L1;
L1.insert_tail(1);
L1.insert_tail(2);
L1.insert_tail(3);
L1.insert_tail(4);
L1.insert_tail(5);
L1.insert_tail(6);
L1.insert_tail(7);
L1.insert_tail(8);
L1.insert_tail(9);
L1.display();
int target;
cout<<"Enter target : ",cin>>target;
vector<vector<int>> v=target_sum(L1.head,L1.tail,target);
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}