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
    cout<<"Enter the value you wnat to insert in left of "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enter the value you wnat to insert in right of "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

//Inorder
void display(node* root){
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        node* temp=st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left) st1.push(temp->left);
        if(temp->right) st1.push(temp->right);
    }
    while(!st2.empty()){
        cout<<st2.top()->data;
        st2.pop();
    }
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    display(root);
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1