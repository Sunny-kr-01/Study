#include <bits/stdc++.h>
using namespace std;
int main(){
int n=13;
int k=2;
//set ith bit
int ans=n|(1<<k);
cout<<ans;
// clear ith bit
int as=n&~(1<<k);
cout<<endl<<as;
    return 0;
}