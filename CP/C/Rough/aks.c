#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n,printf("Enter n : "));
    int x=1;
    int y=0;
    int temp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            if(j%2==0)printf("%d ",y);
            else printf("%d ",x);
        
        temp=x;
            x=y;
            y=temp;
        printf("\n");
    }

    return 0;
}