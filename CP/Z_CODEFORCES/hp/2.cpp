#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        int res;

        if(s<=k){
            m%=k;
            res=(s>m)?s-m:0;
        }else {
            if((m/k)%2){
                res = k-m%k;
            }else{
                res = s-m%k;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}