#include <iostream>
using namespace std;
int main(){
int a,b,c;
// cout<<"Enter the sides : ";
// cin>>a,b,c;  // giving error
cout<<"Enter 1st side : ";
cin>>a;
cout<<"Enter 2nd side : ";
cin>>b;
cout<<"Enter 3rd side : ";
cin>>c;

if(a+b>c and b+c>a and a+c>b) cout<<"Sides of a triangle";
else cout<<"Not sides of triangle";

    return 0;
}