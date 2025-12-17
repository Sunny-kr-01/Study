#include<stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
int arr[n];
for(int i=1;i<=n;i++){
   if(i%2==0) arr[i-1]=2*i;
   else arr[i-1]=i+10;
}
for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
}

    return 0;
}