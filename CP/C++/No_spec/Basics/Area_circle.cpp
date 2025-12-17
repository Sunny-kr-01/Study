#include <iostream>
using namespace std;
int main(){
float r;
cout<<"Enter radius : ";
cin>>r; // cin changes the line automatically.. so don't need to change
float area=3.14*r*r; 
cout<<area; //prints significant no. of digits requires to display answer..(not fixed)


    return 0;
}