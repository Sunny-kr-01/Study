#include <stdio.h>
#include <math.h>
int main(){
int x;
scanf("%d",&x,printf("Enter the no. :"));
for(int i=1;i<=sqrt(x);i++){
    if(x%i==0){
    printf("%d ",i);
    //if(i!=x/i)
    //if(i==x/i) break;
    printf("%d ",x/i);
    }
}

return 0;
}

