#include <bits/stdc++.h>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr=new int;
    Vector(){
        size=0;
        capacity=1;
        int* arr=new int[1];
    }

    void push(int n){
        if(size==capacity){
            capacity*=2;
            int* arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=n;
    }
};

int main(){
Vector v1;
v1.push(10);


    return 0;
}