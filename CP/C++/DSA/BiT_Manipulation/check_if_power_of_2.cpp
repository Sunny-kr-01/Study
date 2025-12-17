#include <bits/stdc++.h>
using namespace std;
int main(){     
int n=16;
int res=n&(n-1); // doing directly in if() creates error
if(res==0) cout<<"Yes";
else cout<<"NO";

    return 0;
}