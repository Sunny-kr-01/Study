#include <iostream>
#include <vector>
using namespace std;
int peak(vector<int> &v,int left,int right){
    if(left>right) return -1;
    int mid=left+(right-left)/2;
    if(v[mid]>v[mid+1] && v[mid]>v[mid-1]) return v[mid];
    else if(v[mid+1]>v[mid]) return peak(v,mid+1,right);
    else if(v[mid+1]<v[mid]) return peak(v,left,mid-1);

    return -1;
}

int main(){
vector<int> mounted={0,3,4,5,6,7,8,9,100000,9,8,4,1};
int n=mounted.size();
cout<<peak(mounted,0,n-1);

    return 0;
}