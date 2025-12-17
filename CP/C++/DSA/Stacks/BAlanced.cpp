#include <bits/stdc++.h>
using namespace std;

bool is_balanced(string s){
    stack<char> bracket;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            bracket.push(s[i]);
        }
        if(s[i]==')'){
            if(bracket.empty() || bracket.top()!='(') return false;
            else bracket.pop();
        }
        if(s[i]=='}'){
            if(bracket.empty() || bracket.top()!='{') return false;
            else bracket.pop();
        }
        if(s[i]==']'){
            if(bracket.empty() || bracket.top()!='[') return false;
            else bracket.pop();
        }
    }
    return true;
}

int main(){
string bracket;
cout<<"Enter the string : ";
cin>>bracket;
if(is_balanced(bracket)) cout<<"TRue";
else cout<<"FAles";


    return 0;
}