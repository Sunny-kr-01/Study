#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> r(n);
        vector<char> o(k);
        unordered_map<int,bool> map;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }

        while(m--){
            int temp;
            cin>>temp;
            map[temp]=true;
        }
        for(int i=0;i<k;i++){
            cin>>o[i];
        }
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            if(o[i]=='L') ;
        }
    }
    return 0;
}