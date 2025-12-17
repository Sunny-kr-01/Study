#include <bits/stdc++.h>
using namespace std;

template<typename T>
class node{
public:
    T value;
    node* next;

    node(T val){
        this->value=val;
        next=NULL;
    }

};

int main(){
node<char>* n=new node<char>('c');
cout<<n->value;
node<int>* node1=new node<int>(3);
cout<<node1->value;

    return 0;
}