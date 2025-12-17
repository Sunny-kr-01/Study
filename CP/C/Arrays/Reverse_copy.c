#include <stdio.h>

int main(){
int arr[]={1,2,3,4,534,3,2,3,43,4,43,3};
int n=sizeof(arr)/4;
int brr[n];
for(int i=0;i<n;i++){
     brr[i]=arr[n-i-1];

}
for(int i=0;i<n;i++){
     printf("%d ",brr[i]);

}

return 0;
}