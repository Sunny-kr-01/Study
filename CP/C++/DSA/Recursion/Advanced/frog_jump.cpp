#include <bits/stdc++.h>
using namespace std;

int frg_jmp(int n,int arr[]){
    if(n==0) return 0;
    if(n==1) return abs(arr[1]-arr[0]);
    if(abs(arr[n]-arr[n-1])<abs(arr[n]-arr[n-2])) return abs(arr[n]-arr[n-1])+frg_jmp(n-1,arr);
    else return abs(arr[n]-arr[n-2])+frg_jmp(n-2,arr);
    
}

int main(){
int n;
cout<<"Enter the no. of steps : ";
cin>>n;
int arr[n];
cout<<"Enter their heights : \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<frg_jmp(n-1,arr);


    return 0;
}