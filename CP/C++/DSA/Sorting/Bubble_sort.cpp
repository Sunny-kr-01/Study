#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,20,30,50,60,40,70,80,90};
int n=sizeof(arr)/4;
for(int i=1;i<=n-1;i++){
    bool flag=false;
    for(int j=0;j<=n-1-i;j++){
        if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);
        flag=true;}
    }
    if(!flag) break;
}
for(int element : arr){
    cout<<element<<" ";
}


    return 0;
}