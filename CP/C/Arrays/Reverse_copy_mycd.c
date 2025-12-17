#include <stdio.h>
int main(){
int arr[]={1,3,4,5,6,78,9,2,3,45,90};
int n=sizeof(arr)/4;
int brr[n];
int a=n-1;
for(int i=0;i<n;i++){
        brr[i]=arr[a];
        a--;
    
}
for(int i=0;i<n;i++){
    printf("%d ",brr[i]);
}

    return 0;
}