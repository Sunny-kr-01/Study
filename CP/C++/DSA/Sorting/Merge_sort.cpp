#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;////////////k=left////////
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;

    }
}

void merge_sort(int arr[],int left,int right){
    if(left>=right) return;
    int mid=left + (right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main(){
int arr[]={3,7,9,5,0,6,4,1,8,2};
int n=sizeof(arr)/4;
merge_sort(arr,0,9);
for(int ele : arr){
    cout<<ele<<" ";
}           

    return 0;
}