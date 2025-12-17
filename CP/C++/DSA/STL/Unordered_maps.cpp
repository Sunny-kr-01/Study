#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> freq;
    vector<int> v;
    int n;
    cout<<"Enetr n : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    while(n){
        int temp;
        cin>>temp;
        v.push_back(temp);
        n--;
    }
    for(int ele : v){
        freq[ele]++;
    }

    cout<<freq.count(3);

    return 0;
}