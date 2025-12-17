#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for(int i=65;i<=n+64;i++){
    for(int j=1;j<=n;j++){
       printf("%c ",i);        
   }
   printf("\n");
}

    return 0;
}
