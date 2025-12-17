#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={1,1,2,3,5,6,3,2};
int check=0;
for(int i=0;i<v.size();i++){
    check^=v[i];
}
int fst_set=((check&(check-1))^check);
int ans1=0;
int ans2=0;
for(int i=0;i<v.size();i++){
    if(v[i]&fst_set) ans1^=v[i];
    else ans2^=v[i];
}
cout<<ans1<<" "<<ans2;

    return 0;
}