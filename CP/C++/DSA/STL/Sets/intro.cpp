#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1={0,4,2,3};
    s1.insert(5);
    cout<<s1.size()<<endl;
    s1.insert(5);
    cout<<s1.size();

    return 0;
}