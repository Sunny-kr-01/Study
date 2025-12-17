#include <bits/stdc++.h>
using  namespace std;

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
    cout<<"Enter the value you want to insert left to "<<temp<<endl;
    root->left=make_tree(root);
    cout<<"Enter the value you want to insert right to "<<temp<<endl;
    root->right=make_tree(root);
    return root;
}

void display(node* root){
    vector<int> pre,in,post;
    stack<pair<node*,int>> st;
    st.push({root,1});
    while(!st.empty()){
        auto it =st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left)st.push({it.first->left,1});
        }
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right)st.push({it.first->right,1});
        }
        else if(it.second==3){
            post.push_back(it.first->data);
        }
    }
    cout<<endl<<"PreOrder : ";
    for(int i:pre){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"InOrder : ";
    for(int i:in){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"PostOrder : ";
    for(int i:post){
        cout<<i<<" ";
    }
    
}

int main(){
    node* root=NULL;
    root=make_tree(root);
    display(root);
    
    return 0;
}