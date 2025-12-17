#include <bits/stdc++.h>
using namespace std;

class scooty{
public:
    string name;
    int top_speed;
    int milage;
    
};

class bike : public scooty{
public:
    int gears;
};

int main(){
bike b1;
b1.name="honda";
b1.gears=4;

    return 0;
}