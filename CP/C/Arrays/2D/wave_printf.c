#include <stdio.h>
int main(){
int m,n;
scanf("%d",&m,printf("Enter the no. of rows : "));
scanf("%d",&n,printf("Enter the no. of columns : "));
int arr[m][n];
printf("Enter the elements : \n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("Wave :\n");
for(int i=0;i<m;i++){
if(i%2==0){for(int j=0;j<n;j++){
    printf("%d ",arr[i][j]);
}}
else{for(int j=n-1;j>=0;j--){
    printf("%d ",arr[i][j]);
}
}
printf("\n");
}



    return 0;
}