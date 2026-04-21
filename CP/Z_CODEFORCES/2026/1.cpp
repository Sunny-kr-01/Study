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
        int ones=0;
        int zeros=0;
        for(int i=0;i<n;i++){
            if(v[i]==1) ones++;
            else zeros++;
        }
        if(zeros>ones) cout<<"Bob"<<endl;
        else if(ones>=zeros) cout<<"Alice"<<endl;

    }
}