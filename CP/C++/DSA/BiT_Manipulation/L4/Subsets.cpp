#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,4,5};
vector<vector<int>> ans;
int n=sizeof(arr)/4;
for(int i=0;i<pow(2,n);i++){
    vector<int> sub;
    for(int j=0;j<n;j++){
        if(i&(1<<j)) sub.push_back(arr[j]);
    }
    ans.push_back(sub);
}

for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}

    return 0;
}