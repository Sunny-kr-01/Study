#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    if(n<0) return;
    print(a,n-1);
    cout<<a[n]<<" ";   // cout<<*(a+n)<<" "..however we did'nt receive pointer it will still work
}

int main(){
int n;
cout<<"Enter no. of elements : ",cin>>n;
int arr[n];
cout<<"Enter elments :\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

print(arr,n-1);
    return 0;
}