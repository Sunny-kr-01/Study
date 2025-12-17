#include <bits/stdc++.h>
using namespace std;

long long fun(){
    int n;
    cin>>n;
    long long sum=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> even;
    vector<int> odd;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    sort(odd.begin(),odd.end(),greater<int>());
    if(odd.size()==0) return 0;
    int check= odd.size()%2==0? odd.size()/2:odd.size()/2+1;
    for(int i=0;i<check;i++){
        if(i==0){
            sum+=odd[0];
            for(int j=0;j<even.size();j++){
                sum+=even[j];
            }
        }
        else sum+=odd[i];
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long ans=fun();
        cout<<ans<<endl;
    }


    return 0;
}