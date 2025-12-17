#include <bits/stdc++.h>
using namespace std;

void quick_sort(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    vector<int> freq(max+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<=max;i++){
        freq[i]+=freq[i-1];
    }
    int res[n];
    for(int i=n-1;i>=0;i--){
        res[--freq[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=res[i];
    }
    
}

int main(){
int arr[]={3,6,4,8,1,3,5,7,6,8,0,9,2,9,0,5,0};
int n=sizeof(arr)/4;
quick_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}