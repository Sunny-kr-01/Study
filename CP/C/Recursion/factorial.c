#include <stdio.h>
int fact(int n){
   if(n==0)return 1; 
    
    return n*fact(n-1);

    

}

int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
printf("%d",fact(n));

}

//second
// #include <stdio.h>

// int fact(int n){
//     if(n==1) return 1;
//     int re=n*(fact(n-1));
//     return re;
// }

// int main(){
// int n;
// scanf("%d",&n,printf("Enter n : "));
// printf("Factorial : %d",fact(n));

//     return 0;
// }
