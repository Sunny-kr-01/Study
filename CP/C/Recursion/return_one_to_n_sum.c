#include <stdio.h>

int nsum(int n){
     int s=0;
     for(int i=1;i<=n;i++)
     s+=i;
    return s;

}


int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
printf("Sum : %d",nsum(n));

    return 0;
}