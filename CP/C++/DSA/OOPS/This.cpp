#include <bits/stdc++.h>
using namespace std;

class cricketer{
public:
    string name;
    int runs;

    cricketer(string name,int runs){
        this->name=name;
        this->runs=runs;
    }
};

int main(){
cricketer p1("MSD",18000);

cout<<p1.name<<" "<<p1.runs;

    return 0;
}