#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 1st number : ";
cin>>a;
cout<<"Enter 1st number : ";
cin>>b;
cout<<"Enter 1st number : ";
cin>>c;

if(a>b){
    if(c>a) cout<<c<<" is the greatest";
    else cout<<a<<" is the greatest";
}
else{
    if(c>b) cout<<c<<" is the greatest";
    else cout<<b<<" is the greatest";
}

    return 0;
}