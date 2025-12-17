#include <bits/stdc++.h>
using namespace std;
int main(){
int n=13;
int k=3;
//using left shift
int s=1<<k;
if((n&s)>0){
    cout<<"\nIs a set ";
}
else cout<<"\nNOt a set";
// usnig right shift
if((n>>k)%2!=0){
    cout<<"\nIs a set";
}
else cout<<"\nNot a set";
    return 0;
}