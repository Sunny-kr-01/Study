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
    cout<<"Enetr the value you want to insert : ";
    cin>>temp;
    if(temp==-1) return NULL;
    root=new node(temp);
    cout<<"Eneter the value you wnat to insert in left of "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Eneter the value you wnat to insert in right of "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

void LOT(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        else{
            if(q.empty()) break;
            cout<<endl;
            q.push(NULL);
        }
        
    }
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    LOT(root);

    return 0;
}