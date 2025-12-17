#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter n : ";
cin>>n;
int t=n;
int count=0;
while(n>0){
    if(n&1) count++;
    n=n>>1;
}
cout<<count<<" "<<c;

count=0;
while(t>1){
    t=t&(t-1);
    count++;
}
cout<<endl<<count;
    return 0;
}