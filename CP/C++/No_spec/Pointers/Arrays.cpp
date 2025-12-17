#include <bits/stdc++.h>
using namespace std;

void print(int (*a)[10],int n){
    for(int i=0;i<n;i++){
        cout<<(*a)[i]<<" ";
    }

}

int main(){
// int arr[]={1,2,3,4,5};
// int *ptr=&arr[1];
// cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr;// name of an array is itself a pointer for its 0th index..
int arr[]={1,2,3,4,5,6,7,8,9,0};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<arr<<" "<<arr+1<<endl;
int (*ptr)[10]=&arr;//pointer now points the whole array..10 caqnnot be replaced by n.. i.e also 10
cout<<*ptr<<endl;// cant dereference the whole array..can pass by the whole array in a function
print(ptr,n);

    return 0;
}
