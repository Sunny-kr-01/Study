#include <bits/stdc++.h>
using namespace std;

class student{
public:
    int roll;
    string name;

    student(int roll,string name){
        this->roll=roll;
        this->name=name;
    }

    void change(student* s){
        s->roll=2405984;
    }

    void print(){
        cout<<roll<<" "<<name;
    }
};

int main(){
student s1(984,"Sunny");
//s1.print();
student* stud=&s1;
cout<<stud->roll<<endl;  //(*stud).name;
s1.change(&s1);
cout<<stud->roll;
    return 0;
}