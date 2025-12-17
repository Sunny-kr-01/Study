#include <bits/stdc++.h>
using namespace std;

class cricketer{
public:    
    string name;
    int runs;
    float avg;

    cricketer(string name,int runs,int avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }

    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }

    int matches(){
        return runs/avg;
    }

};


int main(){
cricketer p1("Kohli",25000,47.6);
cricketer p2("Rohit",18000,42.3);
p1.print();
p2.print();
cout<<p1.matches();
    return 0;
}