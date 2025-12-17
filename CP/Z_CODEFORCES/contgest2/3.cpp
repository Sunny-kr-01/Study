#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> m;
    int count=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    for(int i=0;i<k;i++){
        if(m[i]==0){
            count+=1;
            if(m[k]) m[k]--;
        }
        
    }
    count+=m[k];
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