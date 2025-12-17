#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
int a=1;
for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++){  
    printf("%d ",a);     //printf("%d ",a++);  //(first printd and then increments)
    a++;
    }

printf("\n");    
}


   return 0;
}