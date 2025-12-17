#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter size of array : "));
int arr[n];
for(int i=0;i<n;i++){
   printf("Enetr element(%d) : ",i);
   scanf("%d",&arr[i]);

}
printf("Array : ");

for(int i=0;i<n;i++){
    if(i==(n-1)) printf("%d",arr[i]);
    else printf("%d,",arr[i]);
}

int sum =0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
printf("\nSum : %d",sum);

int product=1;
for(int i=0;i<n;i++){
    product*=arr[i];
}
printf("\nProduct : %d",product);

    return 0;
}