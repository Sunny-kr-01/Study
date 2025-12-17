#include <stdio.h>
int main(){
int x;
scanf("%d",&x,printf("Enter n : "));
int arr[]={1,3,34,35,43,324,2,32,34,45,54,34,34,45,54,3,3,32,32,45,3,5,43,6};
int a=0;
int n = sizeof(arr)/4;
for(int i=0;i<n;i++){
   if(arr[i]>x) a++;

}

printf("No. of elements greater than %d ",a);

    return 0;
}