#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
vector<int> v={1,2,3,4,5,6,7,8};
for(int element : v){
    cout<<element<<" ";
}
cout<<endl;
int k;
k=k%v.size();
cout<<"Enter k : ",cin>>k;
reverse(v.begin(),v.end());
reverse(v.begin()+k,v.end());
reverse(v.begin(),v.begin()+k);
cout<<"Array after reversing the dired values :"<<endl;
for(int element : v){
    cout<<element<<" ";
}
    return 0;
}