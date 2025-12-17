#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int maxi=INT_MIN;
int mini=INT_MAX;

void maximum(node* root){
    if(root==NULL) return;
    if(root->data>maxi) maxi=root->data;
    maximum(root->left);
    if(root->data>maxi) maxi=root->data;
    maximum(root->right);
}

void minimum(node* root){
    if(root==NULL) return;
    if(root->data<mini) mini=root->data;
    minimum(root->left);
    if(root->data<mini) mini=root->data;
    minimum(root->right);
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    maximum(root);
    printf("maximum : %d\n",maxi);
    minimum(root);
    printf("minimum : %d",mini);

    return 0;
}

// 1 2 4 -1 -1 5 -1 -1 3 -1 -1
// ans = max = 5 min = 1