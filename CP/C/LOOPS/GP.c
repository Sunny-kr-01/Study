#include <stdio.h>
int main(){
int a,n,r;
scanf("%d",&a,printf("Enter the starting no. :"));
scanf("%d",&n,printf("Enter the no. of digits :"));
scanf("%d",&r,printf("Enter the common difference :"));
for(int i=1;i<=n;i++){
    printf("%d\n",a);
    a*=r;
}


    return 0;
}