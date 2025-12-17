//Last occurance of given number..
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
cout<<endl<<"Enter the element to check the last occurance : ";
cin>>x;
int check;
for(int i=0;i<n;i++){
    if(vec[i]==x) check=i+1;//better if we traverse from last so that we could break the loop imedietely after finding x..
}
cout<<endl<<"Position "<<check;


    return 0;
}