#include <stdio.h>
int main(){
int x,y;
scanf("%d",&x,printf("Enter x : "));
scanf("%d",&y,printf("Enter y : "));
printf("x : %d  y : %d\n",x,y);
int z=x;
x=y;
y=z;
printf("x : %d  y : %d",x,y);
    return 0;
}