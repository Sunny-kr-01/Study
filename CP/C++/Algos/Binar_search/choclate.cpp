#include <bits/stdc++.h>
using namespace std;

bool candistribute(vector<int> &jars,int mid,int s){
    int student_required=1;
    int curr_sum=0;
    for(int i=0;i<jars.size();i++){
        if(jars[i]>mid) return false;
        if(curr_sum+jars[i]>mid){
            student_required++;
            curr_sum=jars[i];
            if(student_required>s) return false;
        }
        else curr_sum+=jars[i];

    }
    return true;
}

int distribute(vector<int> &jars,int s){
    int low= jars[0];
    int high=jars[0];
    for(int i=1;i<jars.size();i++){
        high+=jars[i];
    }
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(candistribute(jars,mid,s)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
vector<int> jars(0);
int n;
cout<<"Enter the no. of jars : ";
cin>>n;
cout<<"Enter the elements : \n";
for(int i=0;i<n;i++){
    int c;
    cin>>c;
    jars.push_back(c);
}
int s;
cout<<"Enter the no. of students : ";
cin>>s;
cout<<distribute(jars,s);

return 0;
}