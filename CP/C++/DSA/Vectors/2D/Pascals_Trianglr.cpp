#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of rows : ";cin>>n;
vector<vector<int>> pascal(n);
for(int i=0;i<n;i++){
pascal[i].resize(i+1);// pascal[i] is itself a vector!!!!

for(int j=0;j<i+1;j++){
    if(j==0 || j==i)pascal[i][j]=1;
    else pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
}


}    

for(int i=0;i<n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for(int j=0;j<i+1;j++){
        cout<<pascal[i][j]<<"   ";
    }cout<<endl;
}    
    

return 0;
}