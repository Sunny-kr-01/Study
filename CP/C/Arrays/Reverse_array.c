#include <stdio.h>
int main(){
int arr[]={1,23,4,43,45,23,21,34,43,34,87,98};
int n=sizeof(arr)/4;
int i=0;
int j=n-1;
while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

}


    return 0;
}