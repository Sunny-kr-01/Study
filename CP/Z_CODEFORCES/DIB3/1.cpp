#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==maxi){
                count++;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}