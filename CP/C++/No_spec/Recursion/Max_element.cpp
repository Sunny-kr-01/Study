#include <bits/stdc++.h>
using namespace std;

int maxi(int a[],int n,int *ch){
    if(n==0) return *ch;
    maxi(a,n-1,ch);
    if(*ch<a[n]) *ch=a[n];
    return *ch;
}

int main(){
int n;
cout<<"Enter the no. of elements : ",cin>>n;
int arr[n];
int check=INT_MIN;
cout<<"Enter the elemnts :\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<maxi(arr,n-1,&check);
    return 0;
}