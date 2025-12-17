#include <stdio.h>
int main(){
    int c;
    scanf("%d",&c,printf("Enter the no. :"));
    int x=0;
    for(int i=2;i<c;i++){
    if(c%i==0){printf("It is a composite no.");
    x=1;
    break;}       
    }
if(c==1 || c==0)printf("Neither prime nor composite");
else if(x==0)printf("It is a prime no."); 

    return 0;
}