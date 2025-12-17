#include <bits/stdc++.h>
using namespace std;
int main(){
//decimal to binary
int d=1234;
string b="";
while(d!=0){
    b+=to_string(d%2);
    d=d/2;
}
reverse(b.begin(),b.end());
cout<<b;
//binary to decimal
    return 0;
}