#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Ques{
    T value;
    T first;
    int size;
    T* arr;
    int capacity;
public:
    Ques(int n){
        this->capacity=n;
        this->arr=new T[n]; 
        this->size=-1;
    }
    void enque(T val){
        this->size++;
        this->arr[size]=val;
        if(size==0) first=arr[0];
    }
    void irst(){
        cout<<this->first;
        //return this->first;
    }
};

int main(){
Ques<char> Q1(3);
Q1.enque('a');
Q1.enque('b');
Q1.enque('c');
Q1.irst();


    return 0;
}