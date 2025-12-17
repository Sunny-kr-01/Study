#include <bits/stdc++.h>
using namespace std;

bool is_isomorphic(string &s,string &t){
    if(s.size()!=t.size()) return false;
    vector<int> freq1(26,-1),freq2(26,-1);
    for(int i=0;i<s.size();i++){
        if(freq1[s[i]-'a']==freq2[t[i]-'a']){
            freq1[s[i]-'a']=i;
            freq2[t[i]-'a']=i;
        }
        else return false;
    }

    return true;
}

int main(){
string s,t;
cout<<"Enter 1st string : ",cin>>s;
cout<<"Enter 2nd string : ",cin>>t;
if(is_isomorphic(s,t)) cout<<"Yes";
else cout<<"No";



    return 0;
}