#include <iostream>
using namespace std;
int main(){
int x;
cout<<x;//any garbage value since it hasnt yat initialised
//same with pointer 
int* ptr;
cout<<ptr<<endl;//garbage value..but do have some address hi
cout<<*ptr;//random value..integer though whose loaction is randomly stored
//so a wild pointer is a pointer when its only declared but not initialised.. 
//and so contain a address(random memory location)..
//due to this we might get some undefined behaviour and crashes
//in some cases we might get segmentation fault
//segmentation fault is memory related issue

    return 0;
}