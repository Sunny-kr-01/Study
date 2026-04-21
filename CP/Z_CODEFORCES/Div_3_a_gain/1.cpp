#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        if(sum>s) cout<<"NO"<<endl;
        else if(sum==s) cout<<"YES"<<endl;
        else{
            sum=s-sum;
            if(sum%x==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}