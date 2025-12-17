#include <bits/stdc++.h>
using namespace std;
//   destructor is function called when object is deleted..... cannot pass any parameter
class student{
public:
    string name;
    int roll;

    student(string name,int roll){
        this->name=name;
        this->roll=roll;

    }

    ~student(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){
student* s2=new student("HIsenberg",12);
cout<<s2->name<<" "<<s2->roll<<endl;
delete s2;
student s1("Sunny",984);
cout<<s1.name<<endl;
cout<<s1.roll<<endl;

    return 0;
}