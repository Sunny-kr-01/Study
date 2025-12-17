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
    cout<<"Eneter the value you want to insert : ";
    cin>>temp;
    if(temp==-1) return NULL;
    root=new node(temp);

    cout<<"Enter the value to the left of "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enter the value to the right of "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

void It_Inorder(node* root){
    stack<node*> st;
    node* temp=root;
    while(true){
        if(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty()) break;
            temp=st.top();
            st.pop();
            cout<<temp->data;
            temp=temp->right;
        }
    }
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    It_Inorder(root);
    return 0;
}