#include <iostream>
#include <vector>
using namespace std;

vector<int> sort_even_odd(vector<int> v){
    int even =0;
    int odd=v.size()-1;
    while(even<odd){
        if(v[even]%2!=0 && v[odd]%2==0){
            int temp=v[even];
            v[even]=v[odd];
            v[odd]=temp;
        }
        if(v[even]%2==0) even++;
        if(v[odd]%2!=0) odd--;
    }
    return v;
}

int main(){
int n;
cout<<"Enter n : ";cin>>n;
vector<int> v(n);
cout<<"Enter elements :"<<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
}
v=sort_even_odd(v);
cout<<"Sorted Array :\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    return 0;
}