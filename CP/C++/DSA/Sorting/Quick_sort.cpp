#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int first,int last){
    int piv=arr[last];
    int i=first;
    int j=first-1;
    while(i<last){
        if(arr[i]<piv){
            j++;
            swap(arr[j],arr[i]);
        }
        i++;
    }
    swap(arr[last],arr[j+1]);
    return j+1;
}

void quick_sort(int arr[],int first,int last){
    if(first>=last) return;
    int pi=partition(arr,first,last);
    quick_sort(arr,first,pi-1);
    quick_sort(arr,pi+1,last);
}

int main(){
int arr[]={5,3,7,1,8,0,6,2,9,4};
int n=sizeof(arr)/4;
quick_sort(arr,0,n-1);
for(int ele : arr){
    cout<<ele<<" "; 
}
}