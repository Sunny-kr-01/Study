#include <bits/stdc++.h>
using namespace std;
int main(){
set<int,greater<int>> s1;
s1.insert(0);
s1.insert(1);
s1.insert(2);
s1.insert(5);
s1.insert(4);
cout<<s1.size()<<endl;
s1.insert(4);
cout<<s1.size()<<endl;

set<int>::iterator itr;
//for loop
for(itr=s1.begin();itr!=s1.end();itr++){
    cout<<*itr<<" ";
}cout<<endl;    // always stores in sorted manner  can also use "greater<int>" 

//for each loop
for(auto value: s1){
    cout<<value<<" ";
}


    return 0;
}