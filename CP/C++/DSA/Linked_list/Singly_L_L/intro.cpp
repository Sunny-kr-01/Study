//linear data structure used to store list of values
#include <iostream>
using namespace std;

class node{
public:
    int value;
    node* next;
     node(int value){
        this->value=value;
        next=NULL;
     }

};

int main(){
node* n= new node(1);
cout<<n->value<<" "<<n->next;
    return 0;
}