#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>v;
for(int i=0;i<5;i++){
    int a;
    cout<<"Enter the element : ";
    cin>>a;
    v.push_back(a);
}
for(int element : v){
    cout<<element<<" "; 
}


    return 0;
}