#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c;
cout<<"Enter a :";
cin>>a;
cout<<"Enter b : ";
cin>>b;
cout<<"Enter c : ";
cin>>c;

int d = b*b - 4*a*c;
if(d>0){
    cout<<"Roots : ";
    cout<<(-b + sqrt(d))/(2*a)<<" & "<<(-b - sqrt(d))/(2*a);
}
else if(d==0){
    cout<<"Root : ";
    cout<<(-b + sqrt(d))/(2*a);
}

else{
    cout<<"Roots : ";
    cout<<(-b )/(2*a)<<" + "<<"i"<<(sqrt(-d))/(2*a)<<" & "<<(-b )/(2*a)<<" - "<<"i"<<(sqrt(-d))/(2*a);
}





    return 0;
}