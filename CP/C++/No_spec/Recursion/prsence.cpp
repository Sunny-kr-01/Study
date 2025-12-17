#include <bits/stdc++.h>
using namespace std;

bool pr(int arr[],int idx,int x){
    if(idx==-1) return false;
    //mycd
    //if(arr[idx]==x || pr(arr,idx-1,x)) return true;
    return(arr[idx]==x) || pr(arr,idx-1,x);

}

int main(){
int arr[]={1,2,3,4,5,6,7,8};
int n=sizeof(arr)/4;
int x=1;
if(pr(arr,n-1,x)) cout<<"Yes";
else cout<<"No";

    return 0;
}