#include <stdio.h>
#include <limits.h>
int main(){
int arr[4][4]={1,3,4,6,8,3,6,2,9,4,5,0,3,4,5,6};
int max=INT_MIN;
int index;
for(int i=0;i<4;i++){
int count=0;
for(int j=0;j<4;j++){
     count+=arr[i][j];
}if(count>max) {max=count;
index=i+1;}
}
printf("Row with greatest sum : %d\n",index);
printf("greatest sum : %d",max);

    return 0;
}