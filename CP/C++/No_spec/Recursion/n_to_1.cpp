#include <iostream>
using namespace std;

void n_to_1(int n){
    cout<<n<<endl;
    if(n==1) return;
    n_to_1(n-1);
}

int main(){
int n;
cout<<"Enter n :";
cin>>n;
n_to_1(n);

return 0;
}