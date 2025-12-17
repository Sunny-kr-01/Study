#include <bits/stdc++.h>
using namespace std;

void insert_bottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int taap=st.top();
    st.pop();
    insert_bottom(st,ele);
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
cout<<st.top();
int ele;
cout<<"Enter ele:";
cin>>ele;
insert_bottom(st,ele);
while(!st.empty()){
    cout<<st.top();
    st.pop();
}
    return 0;
}