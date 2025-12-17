#include <bits/stdc++.h>
using namespace std;
int main(){
set<int> st1;
st1.insert(0);
st1.insert(6);
st1.insert(5);
st1.insert(4);
st1.insert(2);
st1.insert(3);
set<int> :: iterator itr;
for(itr=st1.begin();itr!=st1.end();itr++){
    cout<<*itr<<" ";
}cout<<endl;

//size,max_size(capacity in vector)
cout<<st1.size()<<"\nMAx size : "<<st1.max_size();
//find() : returns end iterator
cout<<endl<<*st1.find(6)<<" end itr : "<<*st1.end();  //returns position of the element if present else returns end iterator
//cout<<endl<<*it;
//clear 
st1.clear();
cout<<endl<<st1.size();

    return 0;
}