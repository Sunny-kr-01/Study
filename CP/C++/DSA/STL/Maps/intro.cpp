#include <bits/stdc++.h>
using namespace std;
int main(){
//map<key_datatype,value_datatype> map_name
//lets say for phonr directory
map<string,long long int> directory; // by default ascending order
// for descending : map<key_datatype,value_datatype,greater<key_datatype>> map_name; 
directory={{"Sunny",7488366651}};
directory["Naman"]=343457;
directory["Aman"]=3456787;
directory["Man"]=45645677;
directory["Man"]=4564567;//can change also 

// for(auto ele:directory){
//     cout<<ele.first<<" "<<ele.second<<endl;
// }

directory.insert(make_pair("asd",2345));
for(auto ele:directory){
    cout<<ele.first<<" "<<ele.second<<endl;
}

    return 0;
}