#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
//int check = 0;
bool flag = true; //int flag=1
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        flag=false;
        break;
    }
}
if(n==1) cout<<"Neither Prime nor Composite";
else if(flag==false) cout<<"Composite";
else cout<<"Prime";


    return 0;
}