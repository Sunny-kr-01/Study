#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isFull(){return rear==MAX-1;}
int isEmpty(){return front==-1||front>rear;}
void enqueue(int value){
    if(isFull()){printf("Queue Overflow\n");return;}
    if(front==-1) front=0;
    rear++;
    queue[rear]=value;
    printf("Inserted %d\n",value);
}
void dequeue(){
    if(isEmpty()){printf("Queue Underflow\n");return;}
    printf("Deleted %d\n",queue[front]);
    front++;
}
void peek(){
    if(isEmpty()){printf("Queue is empty\n");return;}
    printf("Front element: %d\n",queue[front]);
}
void display(){
    if(isEmpty()){printf("Queue is empty\n");return;}
    printf("Queue elements: ");
    for(int i=front;i<=rear;i++) printf("%d ",queue[i]);
    printf("\n");
}
int main(){
    int choice,value;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1){printf("Enter value: ");scanf("%d",&value);enqueue(value);}
        else if(choice==2) dequeue();
        else if(choice==3) peek();
        else if(choice==4) display();
        else if(choice==5) exit(0);
        else printf("Invalid choice\n");
    }
}
