#include <bits/stdc++.h>
using namespace std;

bool find(vector<vector<int>> &matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int left=0;
    int right=m*n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(matrix[mid/m][mid%m]==target) return true;
        else if(matrix[mid/m][mid%m]>target) right=mid-1;
        else left=mid+1;
    }
    return false;
}

int main(){
vector<vector<int>> matrix={{1,2,3},{5,7,8},{10,12,16}};
int target;
cout<<"Enter target : ";
cin>>target;
if(find(matrix,target)) cout<<"YES!!";
else cout<<"NO!!";

    return 0;
}
