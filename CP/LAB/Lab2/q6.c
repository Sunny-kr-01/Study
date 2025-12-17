#include <stdio.h>
int main(){
int rows,cols;
printf("Enetr the no. of rows: ");
scanf("%d",&rows);
printf("Enetr the no. of cols: ");
scanf("%d",&cols);
int arr[rows][cols];
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
}
for(int j=0;j<cols/2;j++){
    for(int i=0;i<rows;i++){
        int temp=arr[i][j];
        arr[i][j]=arr[i][cols-1-j];
        arr[i][cols-1-j]=temp;
    }
}
printf("\n");
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
}
    return 0;
}