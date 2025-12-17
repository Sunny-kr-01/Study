#include <iostream>
using namespace std;

int fibo(int a){
    if(a==1 || a==2) return 1;
    return fibo(a-2) + fibo(a-1);
    //sum(n-1,s+n);  

    
}

int main(){
int a;
cout<<"Enter n : ";
cin>>a;

cout<<fibo(a);

return 0;
}