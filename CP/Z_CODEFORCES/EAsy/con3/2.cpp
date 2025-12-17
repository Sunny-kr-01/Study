#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        ++left;
        --right;
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0,j=0;
        int i=1;
        bool flag=false;
        while(i<=n){
            if(s[i]>=s[i-1]){
                k=i-1;
                j=i;
                i++;
                flag=true;
            while(true){
                if(s[i]>=s[i-1]) j=i;
                else break;
                i++;
            }
            string copy=s;
            copy.erase(copy.begin()+k,copy.begin()+j+1);
            if(isPalindrome(copy)) flag=true;
        }   

            if(flag) break;
            i++;
        }
        if(flag==false){
            cout<<0<<endl;
            cout<<endl;
        }
        else{
            cout<<j-k+1<<endl;
        for(int i=k+1;i<=j+1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        }
        
    }
    return 0;
}