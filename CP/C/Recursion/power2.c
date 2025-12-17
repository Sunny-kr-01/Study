#include <stdio.h>

int pow(int a,int b){
if(b==0) return 1;
int x=pow(a,b/2);
if(b%2==0){
    return x*x;
}
if(b%2!=0){
    return x*x*a;
}

}

int main(){
int a,b;
scanf("%d",&a,printf("Enter base : "));
scanf("%d",&b,printf("Enter power : "));
printf("%d raised to the power %d : %d",a,b,pow(a,b));
    return 0;
}
