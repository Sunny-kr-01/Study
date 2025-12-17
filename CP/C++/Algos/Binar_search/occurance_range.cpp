#include <bits/stdc++.h>
using namespace std;

void occ_range(int arr[],int n,int target,int left,int right){
    int start=-1,end=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target && arr[mid-1]!=target){
            start=mid;
            left=mid+1;
        }
        if(arr[mid]==target && arr[mid+1]!=target) {
            end=mid;
            right=mid-1;
        }
        else if(arr[mid]<target) left=mid+1;
        else if(arr[mid]>target) right=mid-1;
    }
    cout<<start<<" "<<end;

}

int main(){
int arr[]={0,0,1,1,1,2,2,3,3,4,4,4,5,5,5,6,6,7,7,7,8,8,8,9,9,10,11,11};
int n=sizeof(arr)/4;
int target;
cout<<"Enter target : ";
cin>>target;
occ_range(arr,n,target,0,n-1);
    return 0;
}