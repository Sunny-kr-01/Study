#include <stdio.h>
int main(){
int x;
int arr[]={1,2,23,32,2,2,21,4,34,78,4,6,2,34,57,90,936,46,1,3453,578};
int n= sizeof(arr)/4;
int a=0;
scanf("%d",&x,printf("Enter the no. you want to find : "));
for(int i=0;i<n;i++){
     if(arr[i]==x) {a++;
     break;}
}
if(a!=0) printf("Yes,the element is present in the array");
else printf("No,The element is not present in the array ");

    return 0;
}