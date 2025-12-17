#include <bits/stdc++.h>
using namespace std;

vector<int> ith_span(vector<int> &v){
    vector<int> res(v.size(),1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(!st.empty() and v[st.top()]<=v[i]){
            res[i]++;
            st.pop();
        }
        if(st.empty()){
            for(int j=0;j<=i;j++){
            st.push(j);
            }
        }
        else{
            for(int j=st.top()+1;j<=i;j++){
                st.push(j);
            }
        }
    }
    return res;
}

int main(){
vector<int> v={20,30,30,35,50,40,45,70,75,80};
vector<int> ans=ith_span(v);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" "; 
}
    return 0;
}