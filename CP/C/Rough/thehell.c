#include <stdio.h>


int stc(int n,int *x,int *y){           //second case na de to output hi nhi aa rha ????!!!...
//1st
//if(n==1) return 1;
//if(n==2) return 2;
//better
if(n==*x || n==*y) return n;
//or
//if(n<=2) return n;             //treated as fibonacci series...
return stc(n-*x,*x,*y)+stc(n-*y,*x,*y);

}

int main(){

int n;
scanf("%d",&n,printf("Enter n : "));
//taking input for the no. of steps from user..
int x;
int y;
scanf("%d",&x,printf("Enter first choice for no. of steps : "));
scanf("%d",&y,printf("Enter second choice for no. of steps : "));
int result = stc(n,&x,&y);
printf("no. of ways : %d",result);

return 0;
}


