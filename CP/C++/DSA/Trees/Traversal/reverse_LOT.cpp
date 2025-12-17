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

node* makeTree(node* root){
    int data;
    cout<<"Eneter data : ";
    cin>>data;
    root=new node(data);
    if(data==-1) return NULL;

    cout<<"Enter the data for node left of "<<data<<endl;
    root->left=makeTree(root);
    cout<<"Enter the data for node right of "<<data<<endl;
    root->right=makeTree(root);
    return root;
}

void reverse(node* root){
    queue<node*> q;
    stack<int> s;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            s.push(-1);
            if(!q.empty()) q.push(NULL);
        }
        else{
            s.push(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }

    while(!s.empty()){
        if(s.top()!=-1)
        cout<<s.top()<<" ";
        else cout<<endl;
        s.pop();
    }

}

int main(){
    node* root=NULL;
    root=makeTree(root);
    cout<<endl<<"tree"<<endl;
    reverse(root);
    
//   1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    return 0;
}