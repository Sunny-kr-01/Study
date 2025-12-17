#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data=val;
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
    cout<<"Enter the value you want to insert left to "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enetr the value you want to insert to left of "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

int height(node* root){
    if(root==NULL) return 0;
    
    int h1=height(root->left);
    int h2=height(root->right);

    return 1+max(h1,h2);
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    cout<<height(root);
    return 0;
}