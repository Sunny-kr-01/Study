#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+v[i]<=t){
            count++;
            sum+=v[i];
        }
        
    }
    cout<<count;

    return 0;
}