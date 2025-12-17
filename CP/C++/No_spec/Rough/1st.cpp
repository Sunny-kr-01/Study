#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float x=5/2;
cout<<x;
float a=10,b=3;
float res=a/b;
cout<<fixed<<setprecision(3); // used to set digits after decimal.. fixed must be used first time
cout<<setprecision(1);    // without fixed shows unsual behaviour...maybe 1 digit less
cout<<endl<<res;
cout<<endl<<(int)res; // prints without .000
// again precising..
cout<<setprecision(2);
cout<<endl<<res;


    return 0;
}