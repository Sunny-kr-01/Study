#include <iostream>
using namespace std;
int main(){
int x=3,y,z;
y=x=10;
z=x<10; // its a condition..so only true(0) or false(1)..does'nt mean if it was to be true z would have been 10
cout<<x<<" "<<y<<" "<<z;

    return 0;
}