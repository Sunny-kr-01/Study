#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int max=v[0];
        for(int i=1;i<n;i++){
            if(v[i]>max) max=v[i];
        }
        while(k--){
            cout<<max+1<<" ";
            max++;
        }
        cout<<endl;
    }
}