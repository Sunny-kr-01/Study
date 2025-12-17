#include <stdio.h>

void mod(int n){
  if( n==1) return;
  printf("%dA\n",n);
  mod(n-1);
  printf("%dB\n",n);
  mod(n-1);
  printf("%dC\n",n);

  

}

int main(){
    mod(3);
    return 0;
}
