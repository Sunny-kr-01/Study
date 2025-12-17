#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> v(n,vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int is_possible =m;
        char to_find='v';
        bool ans=false;
        if(is_possible){
            for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[j][i]==to_find){
                    if(to_find=='v') to_find='i';
                    else if(to_find=='i') to_find='k';
                    else if(to_find=='k') to_find='a';
                    else if(to_find=='a') to_find='x';
                    break;
                }
            }
            if(to_find=='x'){
                ans=true;
                break;
            }
        }
        }
        if(to_find=='x') cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
}