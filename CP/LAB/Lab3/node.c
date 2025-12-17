#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};

struct node* create_node(int val){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->value=val;
    new_node->next=NULL;
    return new_node;
}

void print(struct node** head){
    struct node* temp=*head;
    while(temp!=NULL){
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("NULL");
}

int search(struct node** head,int target){
    struct node* temp=*head;
    int count=0;
    while(temp!=NULL){
        if(temp->value==target){
            return count;
        }
        count++;
        temp=temp->next;
    }
    return -1;
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
    struct node* head=NULL;
    insert_tail(&head,1);
    insert_tail(&head,2);
    insert_tail(&head,3);
    insert_tail(&head,4);
    insert_tail(&head,5);
    insert_tail(&head,6);
    insert_tail(&head,7);
    insert_tail(&head,8);
    insert_tail(&head,9);
    insert_tail(&head,10);
    print(&head);
    int target;
    scanf("%d",&target,printf("\nEnetr target : "));
    printf("%d",search(&head,target));


    return 0;
}