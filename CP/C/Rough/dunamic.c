#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
}*head;
// struct LinkedList{
//     struct node* head;
// };

void create(int value){
    
}

void insert_tail(struct node** head,int val){
    struct node* new_node=create_node(val);
    if(*head==NULL){
        *head=new_node;
        return;
    }
    struct node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

}

int main(){



    return 0;
}