#include <stdio.h>

int main(){
int n;
printf("Enter n ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int ans[n];
for(int i=0;i<n;i++){
    ans[i]=-1;
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]) {
            ans[i]=arr[j];
            break;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d  %d\n",arr[i],ans[i]);
}
    return 0;
}