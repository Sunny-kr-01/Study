#include<stdio.h>
#include <limits.h>     //for anither method instead of m=arr[0].. m= INT_MIN  and so loop from 0...
int main(){

int n;
scanf("%d",&n,printf("Enter size of array : "));
int arr[n];
for(int i=0;i<n;i++){
   printf("Enetr element(%d) : ",i);
   scanf("%d",&arr[i]);

}
printf("Array : ");
printf("{");
for(int i=0;i<n;i++){
    if(i==(n-1)) printf("%d",arr[i]);
    else printf("%d,",arr[i]);
}
printf("}");
int m=arr[0];
 for(int i=1;i<n;i++){
     if(arr[i]<m) m=arr[i];

}
printf("\nMinimum value : %d",m);
    return 0;
}