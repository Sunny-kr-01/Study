#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *top = NULL;
void push(int x) {
    Node *temp = malloc(sizeof(Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop() {
    if (top == NULL) return -1;
    int x = top->data;
    Node *temp = top;
    top = top->next;
    free(temp);
    return x;
}
void display() {
    Node *temp = top;
    while (temp) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
