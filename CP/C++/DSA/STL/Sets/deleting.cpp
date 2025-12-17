#include <bits/stdc++.h>
using namespace std;
int main(){
set<int> s1;
s1.insert(0);
s1.insert(1);
s1.insert(2);
s1.insert(5);
s1.insert(4);
for(int ele:s1){
    cout<<ele<<" ";
}cout<<endl;
//s1.erase(1);

auto itr=s1.begin();
itr++;
s1.erase(itr);

for(int ele:s1){
    cout<<ele<<" ";
}cout<<endl;

    return 0;
}