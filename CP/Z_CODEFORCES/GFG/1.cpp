#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool if_zero=false;
        int mini=0;
        for(int i=1;i<n;i++){
            if(v[i]<v[mini]) mini=i;
        }
        
        v[mini]+=1;
        int ans=1;
        for(int i=0;i<n;i++){
            ans*=v[i];
        }
        cout<<ans<<endl;
    }
}