#include <iostream>
using namespace std;

int power(int a,int b){
    if(b==1) return a;
    if(b%2==0) return power(a,b/2) * power(a,b/2);
    else return power(a,b/2) * power(a,b/2+1);
    //sum(n-1,s+n);  

    
}

int main(){
int a,b;
cout<<"Enter a : ";
cin>>a;
cout<<"Enter b : ";
cin>>b;
cout<<power(a,b);

return 0;
}