#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> b(n);
        vector<pair<int,int>> lr(q);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<q;i++){
            int temp1,temp2;
            cin>>temp1;
            cin>>temp2;
            lr[i]=(make_pair(temp1-1,temp2-1));
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                a[i]=max(a[i],b[i]);
            }
            else{
                int temp=max(b[i],a[i+1]);
                a[i]=max(temp,a[i]);
            }
        }
        vector<int> prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=a[i]+prefix[i-1];
        }
        for(auto ele:lr){
            int i=ele.first;
            int j=ele.second;
            if(i==0) cout<<prefix[j]<<" ";
            else cout<<prefix[j]-prefix[i-1]<<" ";
        }
        cout<<endl;

       
        
    }
    return 0;
}