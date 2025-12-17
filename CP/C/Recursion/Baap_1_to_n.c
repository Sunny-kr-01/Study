#include <stdio.h>

void baap(int n){
if(n==0) return;
baap(n-1);
printf("%d\n",n);

}

int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
baap(n);

    return 0;
}