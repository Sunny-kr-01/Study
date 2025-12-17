#include <iostream>
using namespace std;

int fact(int a){
    if(a==0) return 1;
    return a * fact(a-1);
    //sum(n-1,s+n);  

    
}

int main(){
int a,b;
cout<<"Enter n : ";
cin>>a;

cout<<fact(a);

return 0;
}