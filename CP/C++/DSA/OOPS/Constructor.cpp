//used to initialise an object
//function which is called when object is created
#include <bits/stdc++.h>
using namespace std;

class rectangle{
public:
    int length;
    int breadth;

    rectangle(){    //Defalt constructor
        length=0;
        breadth=0;
    }

    rectangle(int l,int b){   //PARAMETERISED Consdtructor
        length=l;
        breadth=b;
    }

    // rectangle(rectangle &r){   //COPY Constructor .... (not needed to initialise)
    //     length=r.length;
    //     breadth=r.breadth;
    // }

    //can use multiple condtructors...
    rectangle(int l){
        length=l;
    }
};

void print(rectangle r){
    cout<<r.length<<" "<<r.breadth;
}

int main(){
rectangle r1(5,4);
rectangle r2(r1);
rectangle r3(3);
r3.breadth=5;
print(r1);
cout<<endl;
print(r2);
cout<<endl;
print(r3);

    return 0;
}