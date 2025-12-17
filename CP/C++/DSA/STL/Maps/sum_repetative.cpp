#include <bits/stdc++.h>
using namespace std;

int dublicate_sum(int arr[],int n){
    int sum=0;
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;  //input arr[i] is the key.. if it is already present then will just ++ the value(hash) if not present adds the key with value 1
    }
    map<int,int> ::iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++){
        if((*itr).second>1){
            sum+=(*itr).first;
        }
    }
    return sum;
}

int main(){
int arr[]={1,5,2,3,4,1,3,2,1};
cout<<dublicate_sum(arr,sizeof(arr)/4);

    return 0;
}