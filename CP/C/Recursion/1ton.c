#include <stdio.h>

void one_to_n(int r,int n){
   if(r>n) return;
   printf("%d\n",r);
   one_to_n(r+1,n);



}

int main(){
    int n,r;
    scanf("%d",&n,printf("Enter n  : "));
    one_to_n(1,n);

    return 0;
}