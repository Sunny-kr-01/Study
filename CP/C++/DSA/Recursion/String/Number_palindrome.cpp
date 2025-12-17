#include <bits/stdc++.h>
using namespace std;

string check_pal(string s,int i,int j){
    if(i>=j) return "Palindrome";
    if(s[i]==s[j]) return check_pal(s,i+1,j-1);
    else return "Not a palindrome";

}

int main(){
int x;
cout<<"Enter n: ",cin>>x;
string s=to_string(x);
int n=s.size();
cout<<check_pal(s,0,n-1);
    return 0;
}