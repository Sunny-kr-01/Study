#include <stdio.h>
int main(){
int n;
printf("Enter n ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a,b;
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);
int count=0;
int start=0;
for(int i=0;i<n;i++){
    if(arr[i]==a){
        count++;
        start=i;
    }
    if(i>start) count++;
    if(arr[i]==b) break;
}
printf("Ans : %d",count);


    return 0;
}