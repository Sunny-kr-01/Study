#include <bits/stdc++.h>
using namespace std;

void insert_bottom(stack<int> &st,int ele,int idx){
    if(!idx){
        st.push(ele);
        return;
    }
    int taap=st.top();
    st.pop();
    insert_bottom(st,ele,idx-1);
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
int ele,indx;
cout<<"Enter ele:";
cin>>ele;
cout<<"Enter index:";
cin>>indx;
insert_bottom(st,ele,st.size()-indx);
while(!st.empty()){
    cout<<st.top();
    st.pop();
}
    return 0;
}