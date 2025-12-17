#include <bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int roll;

    student(string name,int roll,float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }

    void print(){
        cout<<name<<" "<<roll<<" "<<marks<<endl;
    }
private:
    float marks;
};

int main(){
student s1("Sunny",984,9.25);  // able to modify marks using modifier...since it's not private
cout<<s1.name<<" "<<s1.roll<<endl;
//cout<<s1.marks;  // can't..since private
s1.print();  //  since the function is public...just like that can make change() to change marks too

    return 0;
}