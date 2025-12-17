#include <bits/stdc++.h>
using namespace std;

class vehicle{
public:
    string name;
    int top_speed;
    string fuel;
};

class four_wheeler:public vehicle{
public:
    int gears;
};

class two_seater:public four_wheeler{
public:

};

int main(){
two_seater v1;
v1.name="Lmbo";//.......

    return 0;
}