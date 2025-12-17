#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
int count=0;
for(int i=n;i>0;i=i/10){
    count=count+i%10;

}
cout<<"Sum of digits are : "<<count;

    return 0;
}