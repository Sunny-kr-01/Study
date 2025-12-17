#include <bits/stdc++.h>
using namespace std;

bool isPossible(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            count++;
            if (count >= 2) return false; // two adjacent 1s found
        } else {
            count = 0;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isPossible(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}




#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
bool customSort(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) return a.second > b.second; 
    return a.first < b.first;       
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>> v(n);
	    for(int i=0;i<n;i++){
	        v[i].first=i+1;
	        v[i].second=gcd(i+1,n);
	    }
	    sort(v.begin(),v.end(),customSort);
	    
        for(auto it:v){
            cout<<it.first<<" ";
        }
        cout<<endl;
	}

}




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c10=0;
	    int c01=0;
	    for(int i=0;i<n-1;i++){
	        if(s[i]=='1' && s[i+1]=='0') c10++;
	        else if(s[i]=='0' && s[i+1]=='1') c01++;
	    }
	    int diff=abs(c10-c01);
	    if(c10==0 || c01==0) cout<<"Bob"<<endl;
	    else if(c10==c01 && c01>0) cout<<"Alice"<<endl;
	    else if(diff%2!=0) cout<<"Alice"<<endl;
	    else cout<<"Bob"<<endl;
	}

}