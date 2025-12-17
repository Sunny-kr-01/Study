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

int count_nodes(struct node** head){
    struct node* temp=*head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int occurance(struct node** head,int target){
    struct node* temp=*head;
    int count=0;
    while(temp!=NULL){
        if(temp->value==target){
            count++;
        }
        temp=temp->next;
    }
    return count;
}

int main(){
    struct node* head=NULL;
    //q1
    int n;
    printf("Enter the no. of nodes you want to create : ");
    scanf("%d",&n);
    printf("Enetr the values for the nodes : ");
    while(n){
        int temp;
        scanf("%d",&temp);
        insert_tail(&head,temp);
        n--;
    }
    //q2 : print(traverse)
    print(&head);
    //q3 : search element
    int target;
    printf("\nEnetr target : ");
    scanf("%d",&target);
    if(search(&head,target)==-1) printf("Not present");
    else printf("index : %d",search(&head,target));
    //q6 : no. of occurances
    int oc;
    printf("\nEnetr element for its occurances : ");
    scanf("%d",&oc);
    if(occurance(&head,oc)) printf("NO. of occurances : %d",occurance(&head,oc));
    else printf("Not present");
    //q5 : for no. of nodes
    printf("\nTotal no. of nodes : %d",count_nodes(&head));

    return 0;
}