#include <stdio.h>
int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};
int brr[3][3]={2,4,1,4,6,5,4,3,6};
int res[3][3];

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
 res[i][j]=arr[i][j]+brr[i][j];   
}
}   

}