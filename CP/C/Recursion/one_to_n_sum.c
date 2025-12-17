// #include <stdio.h>

// void nsum(int n,int r){
//      if(n==0){
//      printf("%d",r);
//      return;}
//      // mycd;
//     //  r=r+n;
//     // nsum(n-1,r); 
//     nsum(n-1,r+n);

// }


// int main(){
// int n;
// scanf("%d",&n,printf("Enter n : "));
// nsum(n,0);

//     return 0;
// }


#include <stdio.h>

void nsum(int n, int r){
    if(n==0){
        printf("%d",r);
        return;}
    nsum(n-1,r+n);

}

int main(){
int x;
scanf("%d",&x,printf("Enter n : "));
nsum(x,0);
return 0;
}