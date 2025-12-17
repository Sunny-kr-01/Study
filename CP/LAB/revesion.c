#include <stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void heapify(int arr[],int n,int i){
    int l=i;
    int r=2*i+1;
    int s=2*i+2;
    if(r<n && arr[i]<arr[r]) l=r;
    if(s<n && arr[l]<arr[s]) l=s;
    if(l!=i){
        swap(&arr[i],&arr[l]);
        heapify(arr,n,l);
    }
}

void heap_sort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(&arr[i],&arr[0]);
        heapify(arr,i,0);
    }
}


int main(){
    int arr[]={2,3,45,5,7,84,12,43,99};
    int n=sizeof(arr)/4;
    heap_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

