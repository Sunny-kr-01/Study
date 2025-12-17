#include <bits/stdc++.h>
using namespace std;

void ss(int n,int idx,int sum,int arr[],vector <int> &v){
    if(idx==n){
        v.push_back(sum);
        return;
    }
    ss(n,idx+1,sum+arr[idx],arr,v);
    ss(n,idx+1,sum,arr,v);
}

int main(){
int arr[3]={2,3,5};
int n=3;
vector <int> v;
ss(n,0,0,arr,v);
for(int element : v){
    cout<<element<<" ";
}

    return 0;
}