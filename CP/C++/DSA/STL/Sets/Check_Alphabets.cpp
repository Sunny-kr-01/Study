#include <bits/stdc++.h>
using namespace std;

bool is_present(string &str){
    if(str.length()<26) return false;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    set<char> st;
    for(int i=0;i<str.length();i++){
        st.insert(str[i]);
    }
    return (st.size()==26);
}

int main(){
string str="qwertyuiopasdfghjkzxcvbnmQWERTYUSDFGH";
cout<<is_present(str);


    return 0;
}