#include <stdio.h>
int main(){

//int arr[4]={1,2,3,4};
//int arr[4];
//arr[0]=1;
//arr[1]=2;
//arr[2]=3;
//arr[3]=4;
int arr[]={1,2,3,4};

printf("%d\n",arr[0]);
printf("%d\n",arr[1]);  
printf("%d\n",arr[2]);   
printf("%d\n",arr[3]);  
printf("%c\n",arr[5]);  //array index out of bound 
//Modification
arr[2]=5;
printf("%d\n",arr[2]);  //firstly initial value.. then modified 
//Input

int l[4]={1,2,3};
//printf("%d\n",l[3]);
scanf("%d",&l[3],printf("Enter : "));
printf("%d\n",l[3]);
    return 0;
}