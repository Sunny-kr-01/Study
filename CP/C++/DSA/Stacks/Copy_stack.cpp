#include <bits/stdc++.h>
using namespace std;

stack<int> copy_stack(stack<int> st){
    stack<int> reversed;
    while(st.size()){
        reversed.push(st.top());
        st.pop();
    }
    stack<int> res;
    while(reversed.size()){
        res.push(reversed.top());
        reversed.pop();
    }
    return res;
} 

int main(){
stack<int> st;
st.push(0);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<st.top();
stack<int> copied=copy_stack(st);
cout<<copied.top();
    return 0;
}