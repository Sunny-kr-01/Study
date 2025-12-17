#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int left,int right){
    int piv=v[right];
    int i=left;
    int j=left-1;
    for ( i = left; i < right; i++){
        if(v[i]<piv){
            j++;
            swap(v[i],v[j]);
        }
    }
    swap(v[j+1],v[right]);
    return j+1;
}

void quick_sort(vector<int> &v,int left,int right){
    if(right<=left) return;
    int piv=partition(v,left,right);
    quick_sort(v,left,piv-1);
    quick_sort(v,piv+1,right);
}

int binary_search(vector<int> &arr,int target,int left,int right){
    int middle=left+(right-left)/2;
    if(right<left) return false;
    if (arr[middle]==target) return middle;
    if(arr[middle]<target)  binary_search(arr,target,middle+1,right);
    else  binary_search(arr,target,left,middle-1);
}

int main(){
vector<int> arr={1,3,5,7,8,9,0,2,4,6};
quick_sort(arr,0,9);
int target;
cout<<"Enter the target : ";
cin>>target;
if(binary_search(arr,target,0,9)!=false) cout<<binary_search(arr,target,0,9);
else cout<<"Not present";

    return 0;
}