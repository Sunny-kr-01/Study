#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        unordered_map<int,int> m;
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                m[v[i][j]]++;
       
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m[v[i][j]]>((n)*(n-1))){
                    flag=true;
                    break;
                }
       
            }
            if(flag){
                break;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}