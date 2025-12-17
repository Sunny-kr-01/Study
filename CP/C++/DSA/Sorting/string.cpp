#include <iostream>
#include <vector>
using namespace std;

void sort(string &str){
    vector<int> freq(26,0);
    for(int i=0;i<str.length();i++){
        int idx=str[i]-'a';
        freq[idx]++;
    }
    //mycd
    // for(int i=1;i<26;i++){
    //     freq[i]+=freq[i-1];
    // }
    // char res[str.length()];
    // for(int i=0;i<str.size();i++){
    //     res[--freq[str[i]-'a']]=str[i];
    // }
    // cout<<res;
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }

}

int main(){
string str;
cout<<"Enter string : ";
cin>>str;
sort(str);
cout<<str;


    return 0;
}