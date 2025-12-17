#include <bits/stdc++.h>
using namespace std;

void remove_bottom(stack<int> &st){
    if(st.size()==1){
        st.pop();
        return;
    }
    int taap=st.top();
    st.pop();
    remove_bottom(st);
    st.push(taap);

}

int main(){
stack<int> st;
st.push(0);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<st.size();
remove_bottom(st);
cout<<st.size();

    return 0;
}