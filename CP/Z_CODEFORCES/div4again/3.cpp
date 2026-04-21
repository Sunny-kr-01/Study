#include<bits/stdc++.h>
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
        sort(v.begin(),v.end());
        int maxi=1;
        int till=1;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]+1 || v[i]==v[i-1]){
                if(v[i]==v[i-1]) till--;
                till++;
                maxi=max(maxi,till);
                
            }
            else till=1;
        }
        cout<<maxi<<endl;
    }
    return 0;
}