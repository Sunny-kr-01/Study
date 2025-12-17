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

// int is_balanced(node* root){
//     if(root==NULL) return 0;
//     int lh=is_balanced(root->left);
//     int rh=is_balanced(root->right);
//     if(lh==-1 || rh==-1) return -1;
//     if(abs(lh-rh)>1) return -1;
//     return 1+max(lh,rh);
// }

//another way
pair<int,bool> is_balanced(node* root){
    if(root==NULL) return {0,true};
    int lh=is_balanced(root->left).first;
    int rh=is_balanced(root->right).first;

    if(abs(lh-rh)>1) return {-1,false};
    bool LeftSideCheck=is_balanced(root->left).second;
    bool RightSideCheck=is_balanced(root->right).second;
    if(!LeftSideCheck || !RightSideCheck) return {-1,false};
    
    return ;
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    cout<<is_balanced(root).second;
    return 0;
}


// 1 2 4 6 -1 -1 7 -1 -1 -1 -1 -1