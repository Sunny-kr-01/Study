#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array : ";
cin>>n;
vector<int> v(n);
cout<<"Enter the elements :"<<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
} 
int N=1e5 + 10; //scientific notation for 10^5
vector<int> freq(N,0);  //assigning size(n) and initialising values(0); 

for(int i=0;i<n;i++){
    freq[v[i]]++;  //adding 1 on freq index same as v(index)'s value
}
int x;
cout<<"Enter the element to check the occurance : ";
cin>>x;

if(freq[x]>0) cout<<"Element is present";
else cout<<"Not present";

    return 0;
}