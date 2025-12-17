#include <bits/stdc++.h>
using namespace std;

int arm(int n1,int n2){
    if(n1==0) return n2*n2*n2;
    return n2*n2*n2+arm(n1/10,n1%10);
}

int main(){
int n;
cout<<"Enter n : ";cin>>n;
if(arm(n/10,n%10)==n) cout<<"Armstrong";
else cout<<"Noooooo!!!>..";
    return 0;
}