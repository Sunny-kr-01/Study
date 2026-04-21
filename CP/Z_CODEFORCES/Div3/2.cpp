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
    int total=0;
    for(int i=1;i<n;i++){
        total+=abs(v[i]-v[i-1]);
    }
    int ans=total;
    ans=min(ans,total-abs(v[0]-v[1]));
    ans=min(ans,total-abs(v[n-1]-v[n-2]));
    for(int i=1;i<n-1;i++){
        int red=total-abs(v[i]-v[i-1])-abs(v[i]-v[i+1])+abs(v[i-1]-v[i+1]);
        ans=min(ans,red);
    }
    cout<<ans<<endl;
    
}
}