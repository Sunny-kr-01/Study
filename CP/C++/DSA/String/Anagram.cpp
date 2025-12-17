#include <iostream>
#include <vector>
using namespace std;

bool is_anagram(string &s,string &t){
    if(s.size()!=t.size()) return false;
    // vector<int> freq1(26,0),freq2(26,0);
    // for(int i=0;i<s.size();i++){
    //     freq1[s[i]-'a']++;
    // }
    // for(int i=0;i<t.size();i++){
    //     freq2[t[i]-'a']++;
    // }
    // for(int i=0;i<26;i++){
    //     if(freq1[i]!=freq2[i]) return false;
    // }
    vector<int> freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]) return false;
    }
    return true;
}

int main(){
string s,t;
cout<<"Enter  first string : ",cin>>s;
cout<<"Enter 2nd string : ",cin>>t;
if(is_anagram(s,t)) cout<<"Yes";
else cout<<"No";


    return 0;
}