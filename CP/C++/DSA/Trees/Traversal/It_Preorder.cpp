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

void It_Preorder(node* root){
    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        node* temp=st.top();
        cout<<temp->data;
        st.pop();
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    It_Preorder(root);
    return 0;
}