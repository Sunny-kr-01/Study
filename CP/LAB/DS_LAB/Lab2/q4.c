#include <stdio.h>
int main(){
int n;
printf("Enetr the no. of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enetr the eles :\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
int max=arr[0];
int count=1;
for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
        count=1;
    }
    else if(arr[i]==max) count++;
}
printf("Largest : %d which is %d times",max,count);
    return 0;
}