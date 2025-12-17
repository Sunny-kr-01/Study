#include <iostream>
#include <vector>
using namespace std;
int main(){
int m,n;
cout<<"Enter the no. of rows : ";cin>>m;
cout<<"Enter the no. of columns : ";cin>>n;
vector<vector<int>> v(m,vector<int>(n));//vector of datatype vector
cout<<v.size()<<endl;//returns no. of rows
cout<<v[0].size()<<endl;//returns no. of columns
vector<vector<int>> vec={{1,2},{3,4,5},{5,6}};
cout<<vec[2][3];//returns different value everytime... the 

    return 0;
}