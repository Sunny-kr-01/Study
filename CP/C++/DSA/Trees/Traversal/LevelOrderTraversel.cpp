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

node* buildTree(node* root){
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    root=new node(data);

    if(data==-1) return NULL;

    cout<<"Eneter the data for inserting in left of "<<data<<endl;
    root->left=buildTree(root);
    cout<<"Eneter the data for inserting in right of "<<data<<endl;
    root->right=buildTree(root);
    return root;

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
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    
}

int main(){
    node* root;
    root=buildTree(root);
    cout<<"Tree"<<endl;
    levelOrderTraversal(root);
    //1 2 -1 -1 3 -1 -1
    return 0;
}