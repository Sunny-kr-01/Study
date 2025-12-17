#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[2][5]={1,2,3,4,5,6,7,8,9,0};
int m=sizeof(arr)/sizeof(arr[0]);//no. of rows
int n=sizeof(arr[0])/sizeof(arr[0][0]);//no. of columns
int (*p)[2][5]=&arr;
cout<<p<<" "<<(*p)[1]<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<(*p)[i][j]<<" ";}cout<<endl;
}

    return 0;
}