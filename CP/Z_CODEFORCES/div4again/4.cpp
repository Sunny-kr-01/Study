#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> v(n);
        vector<int> copy(n);
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            cin>>v[i];
            copy[i]=v[i];
        }
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            p.push_back(make_pair(u,v));
        }
        for(auto i:p){
            v[i.first-1]+=i.second;
            if(v[i.first-1]>h){
                v=copy;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}