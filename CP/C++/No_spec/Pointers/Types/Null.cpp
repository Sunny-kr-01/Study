#include <iostream>
using namespace std;
int main(){
//if we want to have a pointer variable which is just declared but will get address later
int *ptr=NULL;
int *p1=0;
int *p2='\0';
cout<<ptr<<" "<<p1<<" "<<p2<<endl;
cout<<*ptr;//gives error..in my case nothing happens
// if we derefernce the null pointer the program will directly be terminated
cout<<3;//it doesnt run
    return 0;
}