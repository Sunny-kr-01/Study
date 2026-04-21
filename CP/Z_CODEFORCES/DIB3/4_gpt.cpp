#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        int mini=0;
        for(int i=1;i<n;i++){
            if(p[i]<p[mini]){
                mini=i;
            }
        }

        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=p[(mini+i)%n];
        }

        cout<<res[0];
        cout<<"ANS : ";
        for(int i=1;i<n;i++){
            cout<<" "<<res[i];
        }
        cout<<endl;
    }
    return 0;
}