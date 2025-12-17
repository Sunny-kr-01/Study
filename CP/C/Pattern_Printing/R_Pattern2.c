#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for(int i=1;i<=n;i++){
    for(int j=65;j<=n+64;j++){
       printf("%c ",j);        
   }
   printf("\n");
}

    return 0;
}