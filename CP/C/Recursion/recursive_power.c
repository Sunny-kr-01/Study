#include <stdio.h>

int power(int a,int b){    //int is ok but void is not..
    if(b==0) return 1;

    return a*power(a,b-1);

    
}

int main(){
int a,b;
scanf("%d",&a,printf("Enter base : "));
scanf("%d",&b,printf("Enter power : "));
printf("%d raise to the power %d : %d ",a,b,power(a,b));

    return 0;
}