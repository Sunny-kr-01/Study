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

        int mini=x;
        for(int i=x;i<y;i++){
            if(p[i]<p[mini]){
                mini=i;
            }
        }

        rotate(p.begin()+x,p.begin()+mini,p.begin()+y);

        if(p[x-1]>p[x] && x-1>=0){
            int temp=p[x-1];
            p.erase(p.begin()+x-1);
            p.insert(p.begin()+y-1,temp);
        }
        if(p[y]>p[y-1] && y<n){
            int temp=p[y];
            p.erase(p.begin()+y);
            p.insert(p.begin()+x,temp);
        }
        cout<<"Answer : ";
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}