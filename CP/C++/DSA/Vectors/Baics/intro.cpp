//vectors are dynamic arrays..
//means we can resize(insert or delete) elements
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=6;
vector<int> v(n);//no need to assign size
cout<<v.size()<<"\n"; // return size 
cout<<v.capacity()<<endl;
v.resize(n+1); //resize (new size)
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;//capacity increses (doubles) on each size of power of 2..
//pehle jitne size ka vector hai utna hi capacity ho jata hai aur same 'size' ko touch karne pe double ho jata hai...(Depends on compiler)   
    return 0;
}