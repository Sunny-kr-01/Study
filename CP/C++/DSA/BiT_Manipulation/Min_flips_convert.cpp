#include <bits/stdc++.h>
using namespace std;
int main(){
int n=10;
int target=7;
int help=n^target;
int count=0;
while(help>0){
    help=help&(help-1);
    count++;
}
cout<<count;
    return 0;
}