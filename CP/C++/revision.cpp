#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;

    node(int v){
        this->val=v;
        this->left=NULL;
        right=NULL;
    }
};

node* make_tree(node* root){
    int val;
    cout<<"Enter the value: ";
    cin>>val;
    root=new node(val);

    if(val==-1) return NULL;

    cout<<"Eneter the value left of "<<val<<endl;
    root->left=make_tree(root);
    cout<<"Eneter the value right of "<<val<<endl;
    root->right=make_tree(root);
    return root;
}

void display(node* root){
    stack<node*> q;
    q.push(NULL);
    q.push(root);
    
    
    while(!q.empty()){
        node* temp=q.top();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            cout<<temp->val<<" ";
    }

}

int main(){
    node* root=NULL;
    root=make_tree(root);
    //1 2 -1 -1 3 -1 -1
    cout<<"values:\n";
    display(root);
    return 0;
}