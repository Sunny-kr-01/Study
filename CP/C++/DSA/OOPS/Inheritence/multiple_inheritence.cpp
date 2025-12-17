#include <bits/stdc++.h>
using namespace std;

class person{
public:
    string name;
    int age;
};

class cricketer{
public:
    int runs;
    int matches;
    float avg;
    int wicktes;
};

class student{
public:
    int roll;
    float gpa;

};

class phodu : public cricketer,public student,public person{
public:

};

int main(){

phodu s1;
s1.name="Sunny";
cout<<s1.name;
///////////////////   Same attribute in multiple parents gives error  \\\\\\\\\\\\\\\\\\\\
    return 0;
}