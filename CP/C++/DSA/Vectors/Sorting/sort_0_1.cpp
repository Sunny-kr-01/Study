#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n : ";cin>>n;
int arr[n];
cout<<"Enter 0s and 1s randomly :"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==0) count++;
}
for(int i=0;i<n;i++){
    if(i<count) arr[i]=0;
    else arr[i]=1;
}
cout<<"After Sorting : "<<endl;
for(int element : arr){
    cout<<element<<" ";
}
    return 0;
}