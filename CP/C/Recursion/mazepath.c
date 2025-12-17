#include <stdio.h>

int mzpath(int m,int n){
  if(m==1 || n==1) return 1;
    return mzpath(m-1,n)+mzpath(m,n-1);
}

int main(){
int m,n;
scanf("%d",&m,printf("Enter no. of rows : "));
scanf("%d",&n,printf("Enter no. of columns : "));
printf("No. of ways : %d",mzpath(m,n));

    return 0;
}