#include <bits/stdc++.h>
using namespace std;

int median(vector<int> arr,int n){
    if(n%2!=0) return arr[n/2];
    else return arr[n/2-1];
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    int N;
	    cin>>N;
	    vector<int> arr(N);
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    vector<int> brr(N);
	    for(int i=0;i<N;i++){
	        brr[i]=arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    int ans=median(arr,N);
	    int chef_ans=median(brr,N);
	    if(chef_ans!=ans){
	        cout<<1<<" "<<brr.size()<<endl;
	        return 0;
	    }
	    int l=1,r=brr.size();
	    while(l<r){
	       if(brr.size()%2!=0){
	           brr.erase(brr.begin());
	           l=1,n--;
	           int chef_ans=median(brr,N);
	           if(chef_ans!=ans){
	               cout<<l<<" "<<r<<endl;
	               return 0;
	           }
	       }
	       else{
	       brr.erase(brr.begin());
	       brr.erase(brr.end()-1);
	       l++,r--;
	       n=n-2;
	       int chef_ans=median(brr,N);
	       if(chef_ans!=ans){
	           cout<<l<<" "<<r<<endl;
	           return 0;
	       }
	       }
	    }
	    cout<<-1<<endl;
	}

}