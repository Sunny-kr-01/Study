#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,t;
        cin>>n;
        cin>>s>>t;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        } 
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]]){
                flag=false;
            }
        } 
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}