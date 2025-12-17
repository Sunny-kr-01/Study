#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        string ss=s+s;
        int res=0;
        int nextg=-1;
        for(int i=2*n-1;i>=0;i--){
            if(ss[i]=='g'){
                nextg=i;
            }
            if(i<n && ss[i]==c){
                int b=nextg-i;
                if(b>res) res=b;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
