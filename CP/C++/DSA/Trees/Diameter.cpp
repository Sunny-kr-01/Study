#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
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
    cout<<"Enter the value you wnat to insert in left of "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enter the value you wnat to insert in right of "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

int height(node* root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return 1+max(lh,rh);
}

int ans=0;

int diameter(node* root){
    if(root==NULL) return ans;
    int lh=height(root->left);
    int rh=height(root->right);
    ans=max(lh+rh,ans);
    diameter(root->left);
    diameter(root->right);
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    cout<<diameter(root);
    return 0;
}
// 1 2 -1 -1 3 4 5 9 -1 -1 -1 -1 6 -1 7 -1 8 -1 -1