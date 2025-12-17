#include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n,int pos){
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<n;i++){
        freq[i]+=freq[i-1];
    }
    int res[n];
    for(int i=n-1;i>=0;i--){
        res[--freq[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=res[i];
    }

}

void radix_sort(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=1;max/i>0;i*=10){
        count_sort(arr,n,i);
    }

}

int main(){
int arr[]={2,345,234,3,5,56,53,69,67,0};
int n=sizeof(arr)/4;
radix_sort(arr,n);
for(int ele : arr){
    cout<<ele<<" ";
}
    return 0;
}