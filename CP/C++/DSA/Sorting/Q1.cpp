//move all 0s to end while maintaining the relative order of non zero elements...
// Input : 0 5 0 3 42    output : 5 3 42 0 0
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[]){
    for(int i=0;i<=3;i++){
        bool flag=false;
        for(int j=0;j<=3-i;j++){
            if(arr[j]==0 && arr[j+1]!=0) {swap(arr[j],arr[j+1]);flag=true;}
        }
        if(!flag) break;
    }
}

int main(){
int arr[]={0,5,0,3,42};
sort(arr);
for(int ele : arr){
    cout<<ele<<" ";
}
    return 0;
} 