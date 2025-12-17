#include <stdio.h>
#include <stdlib.h>
int main(){
    int rows,cols;
    printf("Enter the no. of rows : ");
    scanf("%d",&rows);
    printf("Enter the no. of columns : ");
    scanf("%d",&cols);
    int **arr=(int**)malloc(rows*sizeof(int));
    for(int i=0;i<rows;i++){
        arr[i]=(int*)malloc(cols*sizeof(int));
    }
    printf("Enter the elements : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered elements :\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    free(arr);

}