#include <stdio.h>

void swap(int* a,int*b,int*c){
    int temp1=*a;
    int temp2=*c;
    *c=*b;
    *b=temp1;
    *a=temp2;
}

int main(){
int a,b,c;
printf("Enter the values of a,b and c : ");
scanf("%d%d%d",&a,&b,&c);
printf("a:%d b:%d c:%d",a,b,c);
swap(&a,&b,&c);
printf("\nAfter swapping : \n");
printf("a:%d b:%d c:%d",a,b,c);
    return 0;
}