#include <bits/stdc++.h>
using namespace std;

void maxed(string &binary,int k){
    if(k==0) return;
    int res=0,ans=-1;
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='0'){
            int count=0,j=i-1,k=i+1;
            while(j>=0 && binary[j]=='1'){
                count++;
                j--;
            }
            while(k<binary.size() && binary[k]=='1'){
                count++;
                k++;
            }
            if(count>res) {
                res=count;
                ans=i;
            }
        }
    }
    binary[ans]='1';
    maxed(binary,k-1);
}

int main(){
string binary;
cout<<"Enter the binary no. : ";
cin>>binary;
int k;
cout<<"Enter k : ",cin>>k;
maxed(binary,k);
cout<<binary;
    return 0;
}