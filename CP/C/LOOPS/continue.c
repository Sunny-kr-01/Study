#include <stdio.h>
int main(){
int x;
scanf("%d",&x,printf("Enter the no. :"));
for(int i=0;i<=x;i++){
if(i%2==0) continue;
printf("%d ",i);
}


    return 0;
}