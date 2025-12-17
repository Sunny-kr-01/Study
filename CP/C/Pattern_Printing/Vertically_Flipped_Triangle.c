#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++)          //usinf if/else is not very convinient...
    printf("  ");
    for(int k=1;k<=i;k++)
    printf("* ");

printf("\n");    
}


    return 0;
}