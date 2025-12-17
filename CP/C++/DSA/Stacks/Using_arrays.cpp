#include <bits/stdc++.h>
using namespace std;

class Stack{
    int capacity;
    int top_idx;
    int* arr;
public:
    Stack(int c){
        this->capacity=c;
        this->top_idx=-1;
        this->arr=new int[c];
    }
    void push(int val){
        if(this->top_idx==this->capacity-1){
            cout<<"Overflow\n";
            return;
        }
        this->top_idx++;
        this->arr[this->top_idx]=val;
    }
    void pop(){
        if(this->top_idx==-1){
            cout<<"Underflow\n";
            return;
        }
        this->top_idx--;
    }
    int top(){
        if(this->top_idx==-1){
            cout<<"Empty\n";
            return -1;
        }
        return this->arr[this->top_idx];
    }
    bool is_empty(){
        return this->top_idx==-1;
    }
    bool is_full(){
        return this->top_idx==this->capacity-1;
    }
    int size(){
    return this->top_idx + 1;
}
};

int main(){
    Stack st(5);
    st.push(2);
    cout<<st.top()<<endl;
    st.push(3);
    st.push(4);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size();

    return 0;
}