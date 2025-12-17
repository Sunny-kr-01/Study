#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n,k,l,r;
    cin>>n>>k>>l>>r;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for(int size=k;size<=r;size++){
        int i=0,j=size-1;
        while(i<n && j<n){
            unordered_set<int> s;
            for(int m=i;m<=j;m++){
                s.insert(v[m]);
            }
            if(s.size()==k) count++;
            i++;
            j++;
        }
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