#include <stdio.h>
int main(){
int m,n;
scanf("%d",&m,printf("Enter the no. of rows : "));
scanf("%d",&n,printf("Enter the no. of columns : "));

for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){         
   printf("*");}
   printf("\n");
}

    return 0;
}

 //for squares m=n  so only one variable will be used