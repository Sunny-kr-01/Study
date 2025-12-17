//considered sorted when elements in ascending order
//check if sorted..
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

int check=0;
for(int i=0;i<n;i++){
    if(vec[i]>vec[i-1]) continue;
    else check++;
    
}
if(check>1) cout<<endl<<"not sorted";
else cout<<endl<<"Sorted";

    return 0;
}