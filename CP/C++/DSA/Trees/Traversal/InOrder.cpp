#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

node* make_tree(node* root){
    int temp;
    cout<<"Enter the value you want to insert : ";
    cin>>temp;
    if(temp==-1) return NULL;
    root=new node(temp);
    
    cout<<"Enter the value you want to enter in the left of "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enter the value you want to enter in the left of "<<temp<<endl;
    root->right=make_tree(root);
    return root;

}

void pre(node* root){
    if(root==NULL) return;
    pre(root->left);
    cout<<root->val; 
    pre(root->right);
}

int main(){

node* root;
root=make_tree(root);
pre(root);

    return 0;
}