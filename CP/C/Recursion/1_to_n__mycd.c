#include <stdio.h>
int x=1;
void one_to_n(int n){
   if(n==0) return;
   printf("%d\n",x);
   x++;
   one_to_n(n-1);



}

int main(){
    int n;
    scanf("%d",&n,printf("Enter n : "));
    one_to_n(n);

    return 0;
}