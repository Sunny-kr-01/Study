#include <bits/stdc++.h>
using namespace std;
int main(){
//Xors till N
//N=1 --> 1
//N=2 --> 3 (N+1)
//N=3 --> 0
//N=4 --> 4 (N)
//N=5 --> 1 
//N=6 --> 7 (N+1)
//N=7 --> 0 
//N=8 --> 8 (N)  ....
int n;
cout<<"Enter n :";
cin>>n;
if(n%4==0) cout<<n;
else if(n%4==1) cout<<1;
else if(n%4==2) cout<<n+1;
else cout<<0;

    return 0;
}