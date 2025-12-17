#include <iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    return n +sum(n-1);
    //sum(n-1,s+n);  

    
}

int main(){
int n;
cout<<"Enter n : ";
cin>>n;
cout<<sum(n);

return 0;
}