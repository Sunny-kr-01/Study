#include<stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
int arr[n];
printf("Array : {");
for(int i=0;i<n;i++){
   if(i==(n-1)) printf("%d",(i+1)*(i+1));
   else printf("%d,",(i+1)*(i+1));
}
printf("}");
    return 0;
}