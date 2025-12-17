#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       printf("%d ",j);}       //for A,B,C... (%c) 
   
   printf("\n");
}

    return 0;
}