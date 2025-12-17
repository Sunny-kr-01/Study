#include <bits/stdc++.h>
using namespace std;

int at_m(int a,int b,int *pos){
    if(b!=*pos){
        *pos=b;
        if(a%2!=0){
            return a;
        }
        else{
            return a-1;
        }
    }
    else{
        if(a%2!=0){
            return a-1;
        }
        else{
            return a;
        }
    }
}

int fun(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    int pos=0;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ans=ans+at_m(a[0],b[0],&pos);
    for(int i=1;i<n;i++){
    ans=ans+at_m(a[i]-a[i-1],b[i],&pos);
}
    ans=ans+(m-a[n-1]);
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=fun();
        cout<<ans<<endl;
    }
}