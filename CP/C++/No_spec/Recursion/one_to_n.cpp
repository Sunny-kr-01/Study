#include <iostream>
using namespace std;

void one_to_n(int n){
    if(n==0) return;
    one_to_n(n-1);

    cout<<n<<endl;
    
    
}

int main(){
int n;
cout<<"Enter n :";
cin>>n;
one_to_n(n);

return 0;
}