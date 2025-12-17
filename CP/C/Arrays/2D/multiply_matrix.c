#include <stdio.h>
int main(){
int n,m,p,q;
scanf("%d",&m,printf("enter no. of rows of 1st matrix : "));
scanf("%d",&n,printf("enter no. of columns of 1st matrix : "));
int arr[m][n];
printf("\nEnter 1st matrix : \n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
scanf("%d",&p,printf("enter no. of rows of 2nd matrix : "));
scanf("%d",&q,printf("enter no. of coulmns of 2nd matrix : "));
// woe..
if(n!=p) return printf("Not valid");
int brr[p][q];
printf("\nEnter 2nd matrix : \n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&brr[i][j]);
    }
}
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<n;k++){
            res[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}
printf("\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
    }printf("\n");
}

    return 0;
}