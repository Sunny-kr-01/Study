#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5,5,4,3,2,6,7,6,1};
int ans=0;
for(int i=0;i<v.size();i++){
    ans^=v[i];
}
cout<<ans;



    return 0 ;
}