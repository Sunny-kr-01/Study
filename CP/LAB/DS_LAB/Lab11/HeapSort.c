#include <stdio.h>
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
void heapify(int a[],int n,int i){
    int l=i,r=2*i+1,s=2*i+2;
    if(r<n&&a[r]>a[i])l=r;
    if(s<n&&a[s]>a[l])l=s;
    if(l!=i){swap(&a[i],&a[l]);heapify(a,n,l);}
}
void heapSort(int a[],int n){
    for(int i=n/2-1;i>=0;i--)heapify(a,n,i);
    for(int i=n-1;i>0;i--){swap(&a[0],&a[i]);heapify(a,i,0);}
}
void printArray(int a[],int n){for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");}
int main(){
    int a[]={1,2,11,13,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    heapSort(a,n);
    printArray(a,n);
    return 0;
}
