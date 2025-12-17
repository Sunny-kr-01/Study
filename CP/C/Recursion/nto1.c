#include<stdio.h>

void n_to_1(int n){     //(why int --> something not right);but void is ok??? 
    if(n==0) return;    //does changing the function would cahnge anything???
    printf("%d\n",n);
    n_to_1(n-1);
    
}

int main(){
int x;
scanf("%d",&x,printf("Enter n : "));
n_to_1(x);

    return 0;
}