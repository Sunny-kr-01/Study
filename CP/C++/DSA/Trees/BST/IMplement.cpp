#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;
    node(int v){
        val=v;
        left=NULL;
        right=NULL;
    }
};

void insert(node* &root,int val){
    if(root==NULL) {
        root=new node(val);
        return;
    }
    if(val<root->val) insert(root->left,val);
    else insert(root->right,val);
}   

void display(node* root){
    if(root==NULL) return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}

int main(){
    node* root=NULL;
    insert(root,3);
    insert(root,1);
    insert(root,6);
    insert(root,2);
    insert(root,5);
    insert(root,4);
    display(root);
    

    return 0;
}