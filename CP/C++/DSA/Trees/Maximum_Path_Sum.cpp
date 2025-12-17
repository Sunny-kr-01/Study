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

int ans=0;

int max_path(node* root){
    if(root==NULL) return 0;

    int left_sum=max_path(root->left);
    int right_sum=max_path(root->right);
    ans=max(ans,left_sum+right_sum+root->data);
    return max(left_sum+root->data,right_sum+root->data);
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    max_path(root);
    cout<<ans;
    return 0;
}