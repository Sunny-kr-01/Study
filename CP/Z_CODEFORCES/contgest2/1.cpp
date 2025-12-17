#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            m[temp]++;
        }
        int count=0;
        if(m[-1]%2!=0) count+=2;
        count+=m[0];
        cout<<count<<endl;
    }

    return 0;
}