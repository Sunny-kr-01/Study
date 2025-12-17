#include <stdio.h>
int main(){
int n;
for(int w=1;w>0;w++){
scanf("%d",&n,printf("Enter n(odd) : "));
if(n%2!=0){
for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
    if(i==(n/2)+1 || j==(n/2)+1)printf("* ");
    //if(i==(n+1)/2 || j==(n+1)/2)printf("* ");
    else printf("  ");
   }
   printf("\n");
}
}else printf("Odd no. re!!..\n");
if(n%2!=0) break;}

    return 0;
}