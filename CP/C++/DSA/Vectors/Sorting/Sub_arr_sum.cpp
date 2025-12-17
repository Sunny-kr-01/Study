#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of elements : ";cin>>n;
vector <int> array(n);
cout<<"Enter the elements :\n";
for(int i=0;i<n;i++){
    cin>>array[i];
}
cout<<"Array :\n";
for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
}
//prefixing..
for(int i=0;i<n;i++){
    if(i!=0)array[i]+=array[i-1];
}
cout<<"\nPrefixed array :\n";
for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
}
int check=0;
int m;
for(int i=0;i<n;i++){
    if(array[i]==array[n-1]-array[i]) {check++;m=i;break;}   
}
if(check==1) cout<<"\nYes";
else cout<<"\nNo";



    return 0;
}