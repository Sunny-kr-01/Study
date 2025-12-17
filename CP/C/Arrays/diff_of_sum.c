#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter size of array : "));
int arr[n];
for(int i=0;i<n;i++){
   printf("Enetr element(%d) : ",i);
   scanf("%d",&arr[i]);

}
printf("Array : {");

for(int i=0;i<n;i++){
    if(i==(n-1)) printf("%d",arr[i]);
    else printf("%d,",arr[i]);
}
printf("}");
int s=0;
int d=0;
for(int i=0;i<n;i++){
    if(i%2==0) s+=arr[i];
    else d+=arr[i];
}

if(s>d)printf("\nresult : %d",s-d);
else printf("\nresult : %d",d-s);

return 0;
}
