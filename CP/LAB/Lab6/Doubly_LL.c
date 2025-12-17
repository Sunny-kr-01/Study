#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
    struct node* prev;
}node;

node* head=NULL;
node* tail=NULL;

node* create(int val){
    node* new_node=(node*) malloc(sizeof(node));
    new_node->value=val;
    new_node->prev=NULL;
    new_node->next=NULL;
    return new_node;
}

void insert_tail(int val){
    node* new_node=create(val);
    if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->prev=tail;
    tail->next=new_node;
    tail=new_node;
}

void display(){
    node* temp=head;
    printf("NULL<-%d<->",temp->value);
    temp=temp->next;
    while(temp->next!=NULL){
        printf("%d<->",temp->value);
        temp=temp->next;
    }
    printf("%d->NULL\n",temp->value);
}

void delete_head(){
    node* for_del=head;
    head=head->next;
    head->prev=NULL;
    free(for_del);
}

void delete_tail(){
    node* for_del=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(for_del);
}

int main(){
int n;
printf("Enter the no. of nodes : ");
scanf("%d",&n);
printf("Eneter the values :\n");
while(n--){
    int val;
    scanf("%d",&val);
    insert_tail(val);
}
display();
delete_head();
display();
delete_tail();
display();
    return 0;
}