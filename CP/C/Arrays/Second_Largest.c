#include <stdio.h>
#include <limits.h>
int main(){
int arr[]={1,2,3,65,3,54,32,5,67,9,98,9,6,43,34,34,56,78,34,32,35,65,99,99,99,4,65,86,65,4,32,7,8,87,6,};
int n=sizeof(arr)/4;
int y=INT_MIN;
int z=INT_MIN;
for(int i=1;i<n;i++){
   if(arr[i]>y){
    y=arr[i];
   }
}
for(int i=1;i<n;i++){
   {if(arr[i]!=y && arr[i]>z) z=arr[i];
}
}
printf("Second largest no. is %d ",z);

    return 0;
}