#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the no. elements : ";
cin>>n;
vector<int> vec(n);
cout<<"Enter the elements : "<<endl;
for(int i=0;i<n;i++){
    cin>>vec[i];
}
cout<<endl;
for(int element : vec){
    cout<<element<<" ";
}
cout<<endl;
int x;
cout<<"Enter the target_sum : ";
cin>>x;
int count =0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(vec[i]+vec[j]==x) count++;
    }
}
cout<<"No. of target sums : "<<count;

    return 0;
}