#include <stdio.h>
#include <string.h>

void swap(char* x,char* y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

void print(char *str,int l,int r){
    if(l==r){
        printf("%s\n",str);
    }
    else{
        for(int i=0;i<=r;i++){
        swap(&str[l],&str[r]);
        print(str,l+1,r);
        swap(&str[l],&str[i]);
        }
    }
}

int main(){
char str[]="abc";
int n=3;
print(str,0,n-1);



    return 0;
}