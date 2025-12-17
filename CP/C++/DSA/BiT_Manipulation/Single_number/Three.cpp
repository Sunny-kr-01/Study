#include <bits/stdc++.h>
using namespace std;
int main(){
int ans=0;
vector<int> v={1,1,1,2,3,2,2,4,4,4,6,3,3};
for(int bit=0;bit<=31;bit++){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]&(1<<bit)) count++;
    }
    if(count%3==1){
        ans=ans|(1<<bit);
    }
}
cout<<ans;


    return 0;
}