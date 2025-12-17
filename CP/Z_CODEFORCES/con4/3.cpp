#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        bool is_even=false;
        bool is_odd=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) is_even=true;
            else is_odd=true;
        }
        if(is_even && is_odd){
            sort(v.begin(),v.end());
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}