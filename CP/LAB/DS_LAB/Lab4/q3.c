#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

node* create_node(int val){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->value=val;
    new_node->next=NULL;
    return new_node;
}

void insert_head(node** head,int val){
    node* new_node=create_node(val);
    new_node->next=*head;
    *head=new_node;
}

void insert_tail(node** head,int val){
    node* new_node=create_node(val);
    if(*head==NULL){
        *head=new_node;
        return;
    }
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert(node** head,int pos,int val){
    node* new_node=create_node(val);
    if(pos==0){
        insert_head(head,val);
    }
    node* temp=*head;
    while(--pos){
        temp=temp->next;
    }
    node* temp1=temp->next;
    temp->next=new_node;
    new_node->next=temp1;
}

void print(node** head){
    node* temp=*head;
    while(temp!=NULL){
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("NULL\n");
}

void find(node** head,int val){
    node* temp=*head;
    while(temp!=NULL){
        if(temp->next->value==val){
            node* for_del=temp->next;
            temp->next=temp->next->next;
            for_del->next=*head;
            *head=for_del;
            return;
        }
        temp=temp->next;
    }
    printf("NOt found");
}

int main(){
    node* head=NULL;
    int n;
    printf("Enetr no. of nodes : ");
    scanf("%d",&n);
    printf("Enetr the nodes values : \n");
    while(n--){
        int temp;
        scanf("%d",&temp);
        insert_tail(&head,temp);
    }
    print(&head);
    int f;
    printf("Enetr the node to find : ");
    scanf("%d",&f);
    find(&head,f);
    print(&head);

    return 0;
}