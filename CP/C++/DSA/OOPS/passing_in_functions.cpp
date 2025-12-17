#include <bits/stdc++.h>
using namespace std;

class car{
public:
    string name;
    int price;
    int seats;
    string type;
};
//pass by value..so..
void change(car &c){     //..or(car& c)
    c.name="lambo";
}

void print(car c1){
    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<" "<<c1.type<<endl;
}


int main(){
car c1;
c1.name="Honda city";
c1.price=1500000;
c1.seats=5;
c1.type="Sedan";

car c2;
c2.name="Hondacity";
c2.price=1500000;
c2.seats=5;
c2.type="Sedan";
change(c2);
print(c1);
print(c2);
    return 0;
}