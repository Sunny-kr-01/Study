#include <iostream>
#include <vector>
using namespace std;
int main(){
int m,n;
cout<<"Enter the no. of rows : ",cin>>m;
cout<<"Enter the no. of columns : ",cin>>n;
vector<vector<int>> matrix(m,vector<int>(n));
cout<<"Enter the elements :\n";
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cin>>matrix[i][j];
    }
}
cout<<"=====MTRIX=====\n";
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cout<<matrix[i][j]<<" ";
    }cout<<endl;
}
//prefixing..
for(int i=0;i<matrix.size();i++){
    for(int j=1;j<matrix[0].size();j++){
       matrix[i][j]+=matrix[i][j-1];
    }
}
cout<<"Prefixed Matrix :\n";
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
       cout<<matrix[i][j]<<" "; 
    }cout<<endl;
}
int l1,r1,l2,r2;
cout<<"Enter (l1,r1) and (l2,r2) : ";
cin>>l1>>r1>>l2>>r2;
if(l1>l2){
    int temp=l1;
    l1=l2;
    l2=temp;
}
if(r1>r2){
    int temp=r1;
    r1=r2;
    r2=temp;
}
int sum=0;
for(int i=l1;i<=l2;i++){
    if(r1!=0)sum+=matrix[i][r2]-matrix[i][r1-1];
    else sum+=matrix[i][r2];
}
cout<<"Prefix Sum : "<<sum;

    return 0;
}