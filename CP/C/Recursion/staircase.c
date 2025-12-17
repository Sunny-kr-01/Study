#include <stdio.h>


int stc(int n){           //second case na de to output hi nhi aa rha ????!!!...
//1st
//if(n==1) return 1;
//if(n==2) return 2;
//better
if(n==2 || n==1) return n;
//or
//if(n<=2) return n;             //trested as fibonacci series...
return stc(n-1)+stc(n-2);

}

int main(){

int n;
scanf("%d",&n,printf("Enter n : "));
int result = stc(n);
printf("no. of ways : %d",result);

return 0;
}


