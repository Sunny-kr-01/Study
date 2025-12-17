#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n;
    cin>>n;
    int count=0;
    string v;
    cin>>v;
    int i=0,j=2;
    while(i<v.size() && j<v.size()){
        if(v[i]==v[j] && v[i]!=v[i+1]) count++;
        i+=3;
        j+=3;
    }
    if(i+1==v.size()-1 && v[i]!=v[i+1]) count++;
    return count;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=fun();
        cout<<ans<<endl;
    }

    return 0;
}