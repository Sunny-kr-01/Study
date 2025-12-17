#include <stdio.h>

// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         if(n==0)f=1;
//         else f*=i;
//     }
//     return f;
//}

int nCr(int a,int b){
    int f=1;
    for (int i=0;i<b;i++){
    f*=a-i;
    f/=i+1;
    }
    return f;
}

int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
for(int i=0;i<n;i++){
     for(int j=0;j<=n-i;j++){
        printf("  ");
    }
    for(int k=0;k<=i;k++){
        printf("%d   ",nCr(i,k));
    }
    printf("\n");
}
    return 0;
}