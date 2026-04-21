#include <stdio.h>
int main(){
int n;
printf("Enter n ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int target;
printf("Enter target : ");

scanf("%d",&target);
for(int i=0;i<n;i++){
    if(arr[i]==target){
        printf("Index : %d",i);
        break;
    }
}



    return 0;
}