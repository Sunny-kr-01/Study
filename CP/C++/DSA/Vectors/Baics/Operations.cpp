#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> v= {2,3,4};
cout<<v.size()<<endl;
v.push_back(0);
//to insert at desired position
//v.insert(pos,element)
v.insert(v.begin(),1);
v.pop_back();
//to erase desired value
//v.erase(position)
v.erase(v.end()-1);//v.erase(v.end()) gives error...that's already a work for pop_back


    return 0;
}