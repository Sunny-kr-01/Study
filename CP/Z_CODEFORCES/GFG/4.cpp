#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string str;
        cin>>str;
        int maxi=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==c){
                int count=0;
                bool once=false;
                for(int j=i;j<str.size();j++){
                    if(str[j]=='g'){
                        maxi=max(maxi,count);
                        break;
                    }
                    count++;
                    if(j==str.size()-1){
                        if(!once){
                            j=-1;
                            once=true;
                        }

                    }
                    if(once) break;
                }
            }
        }
        
        cout<<maxi<<endl;
    }
}