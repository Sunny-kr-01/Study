#include <bits/stdc++.h>
using namespace std;

vector<int> next_smaller(vector<int> &v){
    vector<int> res(v.size(),v.size()-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(!st.empty() and v[st.top()]>v[i]){
            res[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return res;
}
vector<int> prev_smaller(vector<int> &v){
    reverse(v.begin(),v.end());
    vector<int> res(v.size(),0);
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(!st.empty() and v[st.top()]>v[i]){
            res[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main(){
vector<int> v={2,4,1,5,7,6,4,2,8};
vector<int> ans=next_smaller(v);
vector<int> pans=prev_smaller(v);
cout<<"prev smaller distance : "<<endl;
for(int i=0;i<pans.size();i++){
    cout<<pans[i]<<" "; 
}
cout<<endl<<"next smaller index : "<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" "; 
}
    return 0;
}