#include <bits/stdc++.h>
using namespace std;

void mults(int n, int k){
if(k==0) return;
mults(n,k-1);
cout<<n*k<<" ";
}

int main(){
int n,k;
cout<<"Enter n : ",cin>>n;
cout<<"Enter k : ",cin>>k;
mults(n,k);


}