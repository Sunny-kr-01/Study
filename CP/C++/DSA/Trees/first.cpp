#include <bits/stdc++.h> 
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data for node : ";
    cin>>data;
    root=new node(data);

    if(data==-1) return NULL;
    cout<<"Eneter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root);
    cout<<"Eneter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root);
}

int main(){
    node* root;
    root=buildTree(root);

    return 0;
}