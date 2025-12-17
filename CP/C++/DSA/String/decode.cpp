#include <bits/stdc++.h>
using namespace std;

string decode(string code){
    string res="";
    for(int i=0;i<code.size();i++){
        if(code[i]!=']') res.push_back(code[i]);
        else{
            
            string temp="";
            while(!res.empty() && res.back()!='['){
                temp.push_back(res.back());
                res.pop_back();
            }
            reverse(temp.begin(),temp.end());
            res.pop_back();
            string numb="";
            while(!res.empty() && (res.back()>='0' && res.back()<='9')){
                numb.push_back(res.back());
                res.pop_back();
            }
            reverse(numb.begin(),numb.end());
            int num=stoi(numb);
            while(num){
                res+=temp;
                num--;
            }
        }
        
    }
    return res;
}

int main(){
string code;
cout<<"Enter the code : ";
cin>>code;
cout<<decode(code);

    return 0;
}