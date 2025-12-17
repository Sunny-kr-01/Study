#include <iostream>
#include <vector>
using namespace std;
//void spiral(vector<vector<int>> &matrix<m,vector<int> (n)>)
int main(){
int m,n;
cout<<"Enter no. of rows : ",cin>>m;
cout<<"Enter no. of columns : ",cin>>n;
vector<vector<int>> matrix(m,vector<int > (n));
cout<<"Enter the elements : \n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
cout<<"====MATRIX====\n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }cout<<endl;
}
    return 0;
}