#include <bits/stdc++.h>
using namespace std;
//n_mycd
string rm_oc(string oc,int idx,int n){
    if(idx==n) return "";
    string res="";
   
    if(oc[idx]=='a') res=""+rm_oc(oc,idx+1,n);
    else res=oc[idx]+rm_oc(oc,idx+1,n);
    return res;

}
//mycd
// string rm_oc(string *oc,int n){
//     if(n==0) return *oc;
//     if((*oc)[n]=='a') (*oc).erase((*oc).begin()+n);
//     rm_oc(oc,n-1);
//     return *oc;
// }
//mycd_hint
// string rm_oc(string oc,int idx,int n){
//     string res;  //if(idx==n) return "";
//     if(idx==n) return res;   // string res;
//     if(oc[idx]=='a') res=""+rm_oc(oc,idx+1,n);
//     else res=oc[idx]+rm_oc(oc,idx+1,n);
//     return res;

// }

int main(){
string oc;
cout<<"Enter the string : ";
getline(cin,oc); // not to break input after space 
int n=oc.length();
cout<<rm_oc(oc,0,n);    

   
    return 0;
}