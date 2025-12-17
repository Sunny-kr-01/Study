#include <stdio.h>
int main(){

int x=1;
// int* z=&x;
int*z=&x;
printf("\n      %d\n\n",x);
*z=4;
printf("\n      %d\n\n  ",x);

    return 0;
}