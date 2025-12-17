#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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
        long long check=2;
        bool filag=false;
        long long f = *max_element(v.begin(), v.end()) + 2;
        while(check<=f){
            bool flag=false;
            for(int i=0;i<n;i++){
                if(gcd(check,v[i])==1){
                    flag=true;
                    break;
                }
            }
            if(flag){
                filag=true;
                break;
            }
            check++;
        }
        if(filag) cout<<check<<endl;
        else cout<<-1<<endl;
    }
}