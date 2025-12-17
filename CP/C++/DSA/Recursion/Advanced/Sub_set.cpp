#include <bits/stdc++.h>
using namespace std;

void ss(int n,int arr[],int idx,vector<int> &v){
    if(idx==n){
        for(int i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    return;
    }
    ss(n,arr,idx+1,v);
    v.push_back(arr[idx]);
    ss(n,arr,idx+1,v);
    v.pop_back();
}

int main(){
int n;
cout<<"Enter the no. of elements : ";
cin>>n;
int arr[n];
cout<<"Enter the elements : \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector <int> v;
ss(n,arr,0,v);

    return 0;
}