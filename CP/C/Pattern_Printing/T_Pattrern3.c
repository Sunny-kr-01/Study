#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for (int i=1;i<=n;i++){
int a=1;
for(int j=1;j<=i;j++){                      //for(int j=1;j<=2*i;j+=2){
    printf("%d ",a);
    a+=2;}

printf("\n");    
}


   return 0;
}