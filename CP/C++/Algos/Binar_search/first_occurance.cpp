#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int left,int right){
    int piv=v[right];
    int i=left;
    int j=left-1;
    for ( i = left; i < right; i++){
        if(v[i]<piv){
            j++;
            swap(v[i],v[j]);
        }
    }
    swap(v[j+1],v[right]);
    return j+1;
}

void quick_sort(vector<int> &v,int left,int right){
    if(right<=left) return;
    int piv=partition(v,left,right);
    quick_sort(v,left,piv-1);
    quick_sort(v,piv+1,right);
}

int first_occurance(vector<int> &v,int target,int left,int right){
    if(right<left) return -1;
    int middle=right+(left-right)/2;
    if(v[middle]==target){
        if(middle==0 || v[middle-1]!=target) return middle;
        else return first_occurance(v,target,left,middle-1);
    }
    else if(v[middle]>target) return first_occurance(v,target,left,middle-1);
    else return first_occurance(v,target,middle+1,right);
    
}

int main(){
vector<int> v={3,6,1,7,3,9,7,2,3,0,1};
int n=v.size();
quick_sort(v,0,n-1);
int target;
for(int ele : v){
    cout<<ele<<" ";
}
cout<<"\nEnter target element : ";
cin>>target;
cout<<first_occurance(v,target,0,n-1);

    return 0;
}