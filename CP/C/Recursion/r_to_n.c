#include <stdio.h>

void one_to_n(int r,int n){
   if(r>n) return;
   printf("%d\n",r);
   one_to_n(r+1,n);



}

int main(){
    int n,r;
    scanf("%d",&r,printf("Enter startinf no. : "));
    scanf("%d",&n,printf("Enter ending : "));
    one_to_n(r,n);

    return 0;
}