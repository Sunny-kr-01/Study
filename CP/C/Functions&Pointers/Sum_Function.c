#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b;
   scanf("%d",&a,printf("Enter the 1st no. : "));
    scanf("%d",&b,printf("Enter the 2nd no. : "));
    printf("sum of %d and %d is %d",a,b,sum(a,b));
}