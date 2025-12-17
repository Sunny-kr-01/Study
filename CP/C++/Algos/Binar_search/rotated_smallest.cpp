#include <iostream>
#include <vector>
using namespace std;

int smallest(vector<int> &v){
    int left=0,right=v.size()-1;
    while(right>=left){
        int mid=left+(right-left)/2;
        if(v[mid]<v[mid-1]) return mid;
        if(v[mid]>v[mid+1]) return mid+1;
        if(v[mid]>v[left]) left=mid+1;
        else right=mid-1;
    }
    
}

int main(){
vector<int> rotated={8,9,0,1,2,3,4,5,6,7};
cout<<smallest(rotated);


    return 0;
}