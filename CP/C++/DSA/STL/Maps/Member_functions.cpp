#include <bits/stdc++.h>
using namespace std;
int main(){
map<string,long long int> directory;
directory={{"Aman",12345},{"Suman",2345},{"Dharam",3456}};
map<string,long long int> :: iterator itr=directory.begin();
for(itr;itr!=directory.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}cout<<endl;

//erase
itr=directory.begin();
directory.erase((*itr).first);
itr=directory.begin();
for(itr;itr!=directory.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}cout<<endl;

directory={{"Aman",12345}};
//erase a range
directory.erase(directory.begin(),directory.end());
itr=directory.begin();
for(itr;itr!=directory.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<endl<<"erased";
}cout<<endl;
    return 0;
}