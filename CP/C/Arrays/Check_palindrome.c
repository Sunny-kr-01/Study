#include <stdio.h>
int main(){
int arr[]={1,2,3,4,4,3,2,1};
int n=sizeof(arr)/4;
int a=0;
int i=0;
int j=n-1;
while(i<j){
    if(arr[i]!=arr[j]) {a++;
    break;}
    
    i++;
    j--;
}
if(a==0) printf("It is Palidrome !");
else printf("Not Palindrome !!");


    return 0;
}