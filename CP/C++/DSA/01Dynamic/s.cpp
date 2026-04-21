#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<3){
	        cout<<-1<<endl;
	        continue;
	    }
	    vector<vector<int>> v(n,vector<int>(n,0));
	    int i=0;
	    int j=0;
	    while(j<n){
	        v[i][j]=1;
	        j++;
	    }
	    v[i+1][j-2]=1;
	    v[i+2][j-2]=1;
		j--;
	    while(i<n){
	        v[i][j]=1;
	        i++;
	    }
	    if(n<3) cout<<-1<<endl;
	    else{
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                cout<<v[i][j]<<" ";
	            }
	            cout<<endl;
	        }
	    }
	}

}
