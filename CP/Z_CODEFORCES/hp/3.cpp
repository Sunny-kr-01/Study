#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        int ans=-1;
        for(int i=0;i<=60;i++){
            long long low=n>>i;
            long long high=(n+(1LL<<i)-1)>>i;
            if(low<=k && k<=high){
                ans=i;
                break;
            }
            if(low==0) break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
