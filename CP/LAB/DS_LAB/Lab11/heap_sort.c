#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* create_node(int val){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=val;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

node* insert(node* root,int val){
    if(root==NULL) return create_node(val);
    if(val<root->data) root->left= insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

void display(node* root){
    if(root==NULL) return;
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}



int main(){
    node* root=NULL;
    root=insert(root,6);
    root=insert(root,12);
    root=insert(root,10);
    root=insert(root,15);
    root=insert(root,5);
    root=insert(root,9);
    root=insert(root,18);
    root=insert(root,11);
    root=insert(root,8);
    root=insert(root,7);
    root=insert(root,3);
    root=insert(root,4);
    display(root);

    return 0;
}