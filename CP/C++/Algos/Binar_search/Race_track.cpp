#include <bits/stdc++.h>
using namespace std;

bool can_arrange(vector<int> &track,int s,int mid){
    int last_std=track[0];
    int count=1;
    for(int i=1;i<track.size();i++){
        int curr_std=track[i];
        if(curr_std-last_std>=mid){
            last_std=curr_std;
            count++;
        }
        if(count>=s) return true;
    }
    return false;
}

int arrange(vector<int> &track,int s){
    int low=track[0];
    int high=track[track.size()-1]-track[0];
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(can_arrange(track,s,mid)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}

int main(){
int s,n;
cout<<"Enter the no. of starting points : ",cin>>n;
vector<int> track(0);
cout<<"Enter the cconsecutive distances : \n";
for(int i=0;i<n;i++){
    int c;
    cin>>c;
    track.push_back(c);
}
cout<<"Enter the no. of students : ";
cin>>s;
cout<<arrange(track,s);

    return 0;
}