#include <stdio.h>

int nCr(int n,int r){                                           // int fact(int n){
    if(r>n)printf("r>n??.. chutiye!!");                         // int ncr(int n,int r){
    if(r>n-r){r=n-r;}                                           // return fact(n)/(fact(n-r)*fact(r));}
    int f=1;
    for(int i=1;i<=r;i++){                                      //  int f=1;
    f=f*(n+1-i)/i;}                                           //  for(int i=1;i<=n;i++){
    return f;                                                   //  f*=i;}
                                                                //  return f;
}

int nPr(int n,int r){
    if(r>n)printf("r>n??.. chutiye!!");
    int f=1;
    for(int i=1;i<=r;i++){
    f=f *(n+1-i);
    }
    return f;
}

int main(){
int n,r;
scanf("%d",&n,printf("Enter n : "));
scanf("%d",&r,printf("Enter r : "));
int x;
scanf("%d",&x,printf("For nCr enter 1 and for nPr enter 0 : "));
if(x==0){
int res=nCr(n,r);
printf("nCr : %d",res);}
else if(x==1){
int res=nPr(n,r);
printf("nPr : %d",res);}
else printf("not valid");    



}
                                                
                                                
                                               
                                                
                                                
                                                