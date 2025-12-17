#include <bits/stdc++.h>
using namespace std ;

void ss(string s,int idx,int n,vector<char> &v){
    if(idx==n){
        for(int ele : v){
            cout<<(char)ele;
        }
        cout<<endl;
        return;
    }
    ss(s,idx+1,n,v);
    v.push_back(s[idx]);
    ss(s,idx+1,n,v);
    v.pop_back();
}

int main(){
string sub;
cout<<"Enter the string : ";
getline(cin,sub);
int n=sub.length();
vector<char> v;
ss(sub,0,n,v);


    return 0;
}