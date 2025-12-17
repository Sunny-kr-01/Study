#include <stdio.h>

int change(int x[5]){
   x[2]=77;
}

int main(){

int arr[5] = {0,1,2,3,4};
printf("%d\n",arr[2]);
change(arr);
printf("%d",arr[2]);
    return 0;
}