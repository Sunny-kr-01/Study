# include <iostream>
using namespace std;

int fact(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        x*=i;
    }

    return x;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Fact : "<<fact(n);


    return 0;
}