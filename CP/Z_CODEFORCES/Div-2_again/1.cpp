#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> v(n);
        int ans=0;
        if(h==l){
            for(int i=0;i<n;i++){
                cin>>v[i];
                if(v[i]<=l){
                    ans++;
                }
            }
            ans=ans/2;
        }
        else{
            int mini=min(l,h);
            int maxi=max(l,h);
            int countmini=0;
            int countmaxi=0;
            for(int i=0;i<n;i++){
                cin>>v[i];
                if(v[i]<=mini){
                    countmini++;
                }
                else if(v[i]<=maxi && v[i]>mini) countmaxi++;
            }

            if(countmini<countmaxi){
                ans+=countmini;
            }
            else if(countmini>countmaxi){
                ans+=countmaxi;
                ans+=(countmini-ans)/2;
            }
            else if(countmaxi==0){
                ans+=countmini/2;
            }
            else if(countmini==countmaxi){
                ans+=countmini;
            }

        }
        cout<<ans<<endl;
        
    }
    return 0;
}