#include <bits/stdc++.h>
using namespace std;

vector<int> merge_two(int num1[],int num2[],int n,int m){
    vector<int> res(0);
    int i=0,j=0;
    while(i<n && j<m){
        if(num1[i]<num2[j]){
            res.push_back(num1[i]);
            i++;
        }
        else{
            res.push_back(num2[j]);
            j++;
        }
    }
    while(i<n){
        res.push_back(num1[i]);
            i++;
    }
    while(j<m){
        res.push_back(num2[j]);
            j++;
    }

    return res;

}

int main(){
int num1[]={0,3,6,8,9};
int num2[]={1,2,4,5,7};
int n=sizeof(num1)/4;
int m=sizeof(num2)/4;
vector<int> res=merge_two(num1,num2,n,m);
for(int ele : res){
    cout<<ele<<" ";
}
    return 0;
}