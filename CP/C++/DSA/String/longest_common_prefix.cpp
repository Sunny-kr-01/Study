#include <bits/stdc++.h>
using namespace std;

string l_c_prefix(vector<string> &str){
    sort(str.begin(),str.end());
    string res="";
    string str1=str[0];
    string str2=str[str.size()-1];
    for(int i=0;i<str1.size();i++){
        if(str1[i]==str2[i]) res.push_back(str1[i]);
        else break;
    }
    return res;
}
                                  //o(mlogm*n)...
int main(){
int n;
cout<<"Enter the no. strings : ",cin>>n;
vector<string> str(0);
for(int i=0;i<n;i++){
    string c;
    cin>>c;
    str.push_back(c);
}

cout<<l_c_prefix(str);


    return 0;
}