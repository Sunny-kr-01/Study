#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *arr;
    int top, size;
} Stack;
void init(Stack *s, int size) {
    s->arr = malloc(size * sizeof(int));
    s->top = -1;
    s->size = size;
}
void push(Stack *s, int x) {
    if (s->top == s->size - 1) return;
    s->arr[++s->top] = x;
}
int pop(Stack *s) {
    if (s->top == -1) return -1;
    return s->arr[s->top--];
}
void display(Stack *s) {
    for (int i = s->top; i >= 0; i--) printf("%d ", s->arr[i]);
    printf("\n");
}
int main() {
    Stack s;
    init(&s, 5);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);
    pop(&s);
    display(&s);
    free(s.arr);
    return 0;
}
