#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        stack<char> s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(str[i]);
            }
            else{
                if(s.top()==str[i]){
                    s.pop();
                }
                else{
                    s.push(str[i]);
                }
            }
        }
        if(s.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}