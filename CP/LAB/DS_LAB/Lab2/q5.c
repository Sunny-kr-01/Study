#include <stdio.h>
int main(){
int n;
printf("Enetr the no. of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enetr the eles :\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}printf("\n");
int i=0,j=n-1;
while(i<j){
    if(arr[i]%2!=0) i++;
    if(arr[j]%2==0) j--;
    if(arr[i]%2==0 && arr[j]%2!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}printf("\n");

    return 0;
}