#include <stdio.h>

int nsum(int n){
   if(n==1)return 1; 
    
    int sum=n+nsum(n-1);  //directly  -:
    return sum;           //return n+nsum(n-1);

    

}

int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
printf("%d",nsum(n));

}