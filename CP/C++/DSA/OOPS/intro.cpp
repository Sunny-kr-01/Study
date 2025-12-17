#include <bits/stdc++.h>
using namespace std;

class fruit{
public:
    string name;
    string colour;

};

int main(){
fruit apple;  //object
apple.name="Apple";
apple.colour="Red";
cout<<apple.name<<" "<<apple.colour;

//Object pointer
fruit *mango=new fruit();
mango->name="Mango";
mango->colour="Yellow";
cout<<endl<<mango->name<<" "<<mango->colour;


    return 0;
}
