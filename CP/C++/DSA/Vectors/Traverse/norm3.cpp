//number of occurance greater than given number..
#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of elements : ";
cin>>n;
vector<int> vec(n);

for(int i=0;i<n;i++){
    cin>>vec[i];
}
cout<<endl;
for(int element : vec){
    cout<<element<<" ";
}
int x;
cout<<endl<<"Enter the element to check : ";
cin>>x;
int check=0;
for(int i=0;i<n;i++){
    if(vec[i]>x) check++;
}
cout<<endl<<check<<" times";


    return 0;
}