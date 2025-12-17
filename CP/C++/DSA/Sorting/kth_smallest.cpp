#include <bits/stdc++.h>
using namespace std;

void kth_smallest(int arr[],int left,int right,int k){
    int piv=arr[right];
    int i=left;
    int j=left-1;
    for(int i=left;i<right;i++){
        if(arr[i]<piv) {
            j++;
            swap(arr[j],arr[i]);}
    }
    swap(arr[j+1],arr[right]);
    if(j+2==k) {cout<<"kth smallest : "<<piv;return;}
    else {if(j+2>k)kth_smallest(arr,left,j,k);
          else kth_smallest(arr,j+2,right,k);}
}

int main(){
int arr[]={1,2,0,3,6,7,8,9};
int k,n=9;
cout<<"Enter k : ";
cin>>k;
kth_smallest(arr,0,n-1,k);

}