#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n%k!=0) return 0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    map<int,int> :: iterator it=m.begin();
    for(it;it!=m.end();it++){
        if(it->second%k!=0) return 0;
    }
    it=m.begin();
    for(it;it!=m.end();it++){
        it->second/=k;
    }
    int count=n;
    int i=0,j=1;
    int window=1;
    while(j-i<=n/k){
        while(j<n){
            map<int,int> temp;
            for(int k=i;k<=j;k++){
                temp[v[k]]++;
            }
            map<int,int> :: iterator it2=temp.begin();
            for(it2;it2!=temp.end();it2++){
                if(it2->second>m[it2->first]){
                    break;
                }
            }
            if(it2==temp.end()) count++;
            i++;j++;
        }
        window++;
        i=0;
        j=window;
    }
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