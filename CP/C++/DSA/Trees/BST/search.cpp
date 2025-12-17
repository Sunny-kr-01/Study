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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl; 
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<<temp->val<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    
}

bool search(node* root,int target){
    if(root==NULL) return false;
    if(target==root->val) return true;
    if(target>root->val) search(root->right,target);
    else search(root->left,target);
}

int main(){
    node* root=NULL;
    insert(root,3);
    insert(root,1);
    insert(root,6);
    insert(root,2);
    insert(root,5);
    insert(root,4);
    levelOrderTraversal(root);
    display(root);
    cout<<endl<<search(root,0);

    return 0;
}