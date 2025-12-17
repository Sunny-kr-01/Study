#include<stdio.h>
#include<limits.h>
int main(){
int arr[7][3]={1,2,3,124,5,6,7,8,9,2,22,2,34,45,9,56,7,66,8,68,23};
int x=INT_MIN;
for(int i=0;i<7;i++){
for(int j=0;j<3;j++){
    if(arr[i][j]>x) x=arr[i][j];
}
}      
printf("Maximum element : %d",x);

    return 0;
}