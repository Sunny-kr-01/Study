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
int l1,r1,l2,r2;
cout<<"Enter (l1,r1) and (l2,r2) : ";
cin>>l1>>r1>>l2>>r2;
int sum=0;
if(l1>l2) {
    int temp=l1;
    l1=l2;
    l2=temp;
}
if(r1>r2) {
    int temp=r1;
    r1=r2;
    r2=temp;
}
cout<<"Coordinated Matrix :\n";
for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
       cout<<matrix[i][j]<<" "; 
    }cout<<endl;
}

for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
       sum+=matrix[i][j]; 
    }
}
cout<<"Sum : "<<sum;

    return 0;
}