#include <bits/stdc++.h>
using namespace std;

int alt_sum(int n){
    if(n==0) return 0;
    if(n%2==0) return -n+alt_sum(n-1);
    else return +n+alt_sum(n-1);


}

int main(){
int n;
cout<<"Enter n: ",cin>>n;
cout<<alt_sum(n);


    return 0;
}