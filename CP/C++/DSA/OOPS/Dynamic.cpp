#include <bits/stdc++.h>
using namespace std;

class cricketer{
public:    
    string name;
    int runs;
    float avg;

    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};


int main(){
cricketer p1("Kohli",25000,47.6);
cricketer p2("Rohit",18000,42.3);
int *ptr=new int(5);
cout<<*ptr<<endl; 
cricketer* c1=new cricketer("MSD",18000,40.1);
cout<<c1->avg;
    return 0;
}