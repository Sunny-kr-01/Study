#include <stdio.h>
int main(){
int n;
printf("Eneter the no. of elements : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements :\n'");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int k;
printf("Enetr k : ");
scanf("%d",&k);
printf("kth smallest : %d\nkth largest : %d",arr[k-1],arr[n-k]);
    return 0;
}
