#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
string x="Ma chuda";
cout<<x<<endl;
int n=x.length();  // length of string excluding null (\0)...COUNTS SPACE TOO
cout<<n<<"  "<<x.size()<<endl; //counts the size(length)
x.push_back('o'); //adds new char in last
cout<<x<<endl;
x.push_back('0'); // if entered more tham one char last one gets added
cout<<x<<endl;
x.pop_back(); //removes the last char
cout<<x<<endl;
x.append(" jao"); //adds new string in last
cout<<x<<endl;
//Plus Operator
x= x+ " abhi jao!!";
cout<<x<<endl;
x.clear(); // clears whole string
cout<<x<<x.length()<<endl;
//Plus Operator
x= x+ "ab jao re!!";
cout<<x<<endl;
reverse(x.begin(),x.end()); //requires algorithm header...
cout<<x;
reverse(x.begin(),x.end());
cout<<endl<<x;

//additionals

int num=32;
string numb=to_string(num);
cout<<endl<<numb;



    return 0;
}