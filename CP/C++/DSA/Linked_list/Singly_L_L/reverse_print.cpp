#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int val){
        this->value=val;
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

    void insert(int arr[],int n){
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        int i=0;
        while(i<n){
            node* new_node= new node(arr[i]);
            temp->next=new_node;
            temp=temp->next;
            i++;
        }
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

void reverse_display(node* head){
    if(head==NULL) return;
    reverse_display(head->next);
    cout<<head->value<<"<-";
}

int main(){
LinkedList L1;
L1.insert_tail(0);
L1.display();
int arr[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/4;
L1.insert(arr,n);
L1.display();
reverse_display(L1.head);
    return 0;
}