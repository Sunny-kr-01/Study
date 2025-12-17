#include <iostream>
using namespace std;
int main(){
int x=8;
int* y=&x;            //pointers are the datatypes which stores the address..
cout<<&x<<endl;
cout<<*y<<endl;
//cout<<&y<<endl;   //pointers also have address oobviously..
*y=4;
cout<<*y<<endl;
    return 0;
}