#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the number to check : ";
cin>>x;
//int check=x/100;
if(x<99 || x>999) cout<<"It is not a three digit bumber ";
else cout<<"It is a three digit number";


    return 0;
}