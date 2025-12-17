#include <bits/stdc++.h>
using namespace std;

int sq_root(int n){
    int left=0;
    int right=n-1;
    int ans=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(mid*mid==n) return mid;
        if(mid*mid<n){
            ans=mid;
            left=mid+1;
        }
        else right=mid-1;
    }
    return ans;

}

// int sq_root(int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2+1;
//         if(mid*mid>n && (mid-1)*(mid-1)<=n) return mid-1;
//         else if(mid*mid<=n && (mid+1)*(mid+1)>n) return mid;
//         else if(mid*mid>n ) right= mid-1;
//         else if(mid*mid<n ) left=mid+1; 
//     }

// }

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<sq_root(n);
}