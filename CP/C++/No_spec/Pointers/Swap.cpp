#include <iostream>
using namespace std;

void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
int a,b;
cout<<"Enter num1 : ";
cin>>a;
cout<<"Enter num2 : ";
cin>>b;
cout<<"num1 : "<<a<<endl<<"num2 : "<<b<<endl;
cout<<"***AFTER SWAPPING***"<<endl;
swap(&a,&b);
cout<<"num1 : "<<a<<endl<<"num2 : "<<b<<endl;



    return 0;
}