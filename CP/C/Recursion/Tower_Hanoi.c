#include <stdio.h>

void T_O_H(int n,char s,char h,char d){
   if(n==0) return ;
   T_O_H(n-1,s,d,h);
   printf("%c -> %c\n",s,d);
   T_O_H(n-1,h,s,d);
   return;
  


}

int main(){

int n;
scanf("%d",&n,printf("Enter n : "));
T_O_H(n,'A','B','C');
    return 0;
}