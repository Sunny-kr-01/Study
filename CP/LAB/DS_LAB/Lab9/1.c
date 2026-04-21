#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* create(int val){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=val;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

node* make_tree(node* root){
    int temp;
    printf("Eneter the value you enat to insert : ");
    scanf("%d",&temp);
    if(temp==-1) return NULL;
    root=create(temp);
    printf("Enetr the value you want to insert in left of %d\n",temp);
    root->left=make_tree(root);
    printf("Enetr the value you want to insert in right of %d\n",temp);
    root->right=make_tree(root);
    return root;
}

node* insert_make_BST(node* root,int val){
    if(root==NULL){
        return create(val);
    }
    if(val>root->data){
        root->right=insert_make_BST(root->right,val);
    }
    else root->left=insert_make_BST(root->left,val);
}

void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main(){
    node* root=NULL;
    root=insert_make_BST(root,1);
    root=insert_make_BST(root,9);
    root=insert_make_BST(root,6);
    root=insert_make_BST(root,4);
    root=insert_make_BST(root,2);
    inorder(root);

    return 0;
}