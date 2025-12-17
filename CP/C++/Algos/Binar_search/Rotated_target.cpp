#include <iostream>
#include <vector>
using namespace std;

int position(vector<int> &v,int target){
    int right=v.size()-1;
    int left=0;
    while(right>=left){
        int mid=left+(right-left)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]>v[left]){
            if((v[mid]>target && target<v[left]) || (v[mid]<target)) left=mid+1;
            else right=mid-1;
        }
        else{
            if((v[mid]>target) || (v[mid]<target && target>v[right])) right=mid-1;
            else left =mid+1;
        }
    }
}

using namespace std;
int main(){
vector<int> rotated={6,7,0,1,2,3,4,5};
int target;
cout<<"Enter the target : ";
cin>>target;
cout<<position(rotated,target);


    return 0;
}