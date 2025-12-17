#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n : "));
int arr[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
}}
printf("\n\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    printf("%d ",arr[i][j]);
}printf("\n");
}printf("\n\n");
//Transpose..
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
    int temp=arr[i][j];
    arr[i][j]=arr[j][i];
    arr[j][i]=temp;}
}

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    if(j<n/2){int temp=arr[i][j];
    arr[i][j]=arr[i][n-1-j];
    arr[i][n-1-j]=temp;}
}}

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    printf("%d ",arr[i][j]);}
    printf("\n");
}


    return 0;
}