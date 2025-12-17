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

int intersection_point(node* head1,node* head2){
        node* ptr1=head1;
        node* ptr2=head2;
        int length1=0;
        int length2=0;
        int new_size=0;
        while(ptr1!=NULL){
            ptr1=ptr1->next;
            length1++;
        }
        while(ptr2!=NULL){
            ptr2=ptr2->next;
            length2++;
        }
        ptr1=head1;
        ptr2=head2;
        if(length2>length1){
            new_size=length2-length1;
            while(new_size){
                ptr2=ptr2->next;
                new_size--;
            }
        }
        else{
            new_size=length1-length2;
            while(new_size){
                ptr1=ptr1->next;
                new_size--;
            }
        }
        while(true){
            if(ptr1->value==ptr2->value) return ptr1->value;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }

int main(){
LinkedList L1,L2;
int n;
cout<<"enter tne no. of elements for 1st : ",cin>>n;
cout<<"Enter the elements : \n";
for(int i=0;i<n;i++){
    int emp;
    cin>>emp;
    L1.insert_tail(emp);
}
L2.insert_tail(9);
L2.insert_tail(8);
L2.insert_tail(7);
int count=5;
node* temp=L1.head;
while(count){
    temp=temp->next;
    count--;
}
node* temp2=L2.head;
while(temp2->next!=NULL){
    temp2=temp2->next;
}
temp2->next=temp;

L1.display();
L2.display();
cout<<intersection_point(L1.head,L2.head);
    return 0;
}