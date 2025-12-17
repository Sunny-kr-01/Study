#include <stdio.h>

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
int x,y;
scanf("%d",&x,printf("Enter x : "));
scanf("%d",&y,printf("Enter y : "));
printf("x : %d\ny: %d\n",x,y);
swap(&x,&y);
printf("x : %d\ny: %d",x,y);

    return 0;
}