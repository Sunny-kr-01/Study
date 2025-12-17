#include <bits/stdc++.h>
using namespace std;

void copy_stack(stack<int> st,stack<int>& copied){
    if(st.empty()){
        return;
    }
    int taap=st.top();
    st.pop();
    copy_stack(st,copied);
    copied.push(taap);
}

int main(){
stack<int> st;
st.push(0);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
stack<int> copied;
copy_stack(st,copied);
cout<<copied.top();

    return 0;
}