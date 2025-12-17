#include <stdio.h>
int main(){


int arr[]={1,2,4,2,34,645,45,3,34,5,6,65,3,2,655,65,2443,65,65,43,4,45};
int x= sizeof(arr);
printf("%d\n",x);  //output ---> 88 (int size 4 bit)
//so to get the size of the array we should divide it by 4 or can be cocidered sizeof(arr[0]) i.e. 4 bit only...
int y=x/4;
printf("%d\n",y);
 
int z=x/sizeof(arr[1]);
printf("%d",z);


    return 0;
}