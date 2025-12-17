#include <bits/stdc++.h>
using namespace std;

string l_c_prefix(vector<string> &str){
    int res=INT_MAX;;
    string test=str[0];
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<test.size() && j<str[i].size()){
            if(test[j]!=str[i][j]){
                if(j<res) res=j;
            }
            j++;
        }
    }
return test.substr(0,res);
}

int main(){
int n;
cout<<"Enter the no. of strings : ",cin>>n;
vector<string> str(0);
cout<<"Enter the strings :\n";
for(int i=0;i<n;i++){
    string c;
    cin>>c;
    str.push_back(c);
}
cout<<"-->"<<l_c_prefix(str);
    return 0;
}