#include <bits/stdc++.h>
using namespace std;

void sel_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]) min=j;
        }
        if(min!=i) swap(arr[min],arr[i]);
    }
}

int main(){
int arr[]={2,3,1,6,4,8,5,7};
int n=sizeof(arr)/4;
sel_sort(arr,n);

for(int ele : arr){
    cout<<ele<<" ";
}

    return 0;
}