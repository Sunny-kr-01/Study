#include <iostream>
using namespace std;

int ncr(int n,int r){
    int res=1;
    if(r>n-r) r=n-r;
    for(int i=1;i<=r;i++){
      res = res * (n+1-i)/i; // res*= can give error..
    }
return res;

}

int main(){
int n,r;
cout<<"Enter n : ";
cin>>n;
cout<<"Enter r : ";
cin>>r;

if (n >= 0 && r >= 0 && r <= n) {
        cout << "nCr: " << ncr(n, r) << endl;
    } else {
        cout << "Invalid input. Ensure that 0 <= r <= n." << endl;
    }


    return 0;
}