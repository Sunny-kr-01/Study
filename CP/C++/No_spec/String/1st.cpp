#include <iostream>
//#include <string>

using namespace std;
int main(){
string x;
//cin>>x;//gives error!!
getline(cin,x);
cout<<x<<endl;
x[0] ='1';
cout<<x<<endl;

    return 0;
}