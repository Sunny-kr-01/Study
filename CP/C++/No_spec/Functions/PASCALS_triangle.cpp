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
int n;
cout<<"Enter n : ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<ncr(i-1,j-1)<<"   ";
            }
    cout<<endl;
}


    return 0;
}