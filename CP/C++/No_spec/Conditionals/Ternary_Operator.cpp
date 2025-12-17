#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number : ";
cin>>n;
// expression1 ? expression2 : expression3;
// condition ? if true : if false;
(n%2==0) ? cout<<"Even" : cout<<"Odd";

    return 0;
}