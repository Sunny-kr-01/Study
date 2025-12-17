#include <bits/stdc++.h>
using namespace std;

void in_sort(int arr[]){
    int n=10;
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

int main(){
int arr[]={6,3,5,8,9,2,7,0,4,7};
in_sort(arr);

for(int ele : arr){
    cout<<ele<<" ";
}
    return 0;
}