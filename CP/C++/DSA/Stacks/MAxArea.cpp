#include <bits/stdc++.h>
using namespace std;

vector<int> next_smaller(vector<int> v){
    vector<int> res(v.size(),-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(!st.empty() && v[i]<v[st.top()]){
            res[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return res;
}

vector<int> prev_smaller(vector<int> v){
    vector<int> res(v.size(),-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(!st.empty() && v[i]<v[st.top()]){
            res[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int max_area(vector<int> &v){
    vector<int> right=next_smaller(v);
    vector<int> left=prev_smaller(v);
    
    for(int ele:right){
        cout<<ele<<" ";
    }
    
}

int main(){
vector<int> v(0);
int n;
cout<<"Enter the no. of elements : ";
cin>>n;
while(n){
    int temp;
    cin>>temp;
    v.push_back(temp);
    n--;
}

//cout<<"Max Area : "<<max_area(v);

    return 0;
}