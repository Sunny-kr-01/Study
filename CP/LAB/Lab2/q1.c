#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
printf("Enter the no. elements : ");
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));
printf("ENter the elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Entered elements : ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

free(arr);

    return 0;
}