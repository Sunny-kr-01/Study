#include <iostream> //using namespace std; will not reqire writting std :: 
using namespace std; // can't use "endl" without this
int main(){
int n;
std :: cout<<"Enter n :"; // line 1
std :: cin>>n;            //line 1
std :: cout<<"n:"<<n<<endl;
std :: cout<<"First use then increament..so will not print increased value ..so n++ : "<<n++<<endl;
std :: cout<<"Increaments straight away..I think..so ++n : "<<++n;
return 0;
}