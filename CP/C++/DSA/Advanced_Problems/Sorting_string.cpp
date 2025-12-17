#include <bits/stdc++.h>
using namespace std;

void sort(vector<string> &alph){
    int n=alph.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        //mycd
        for(int k=i;k<n-1;k++){
        int j=0;
        while(true){
            if(alph[min][j]>alph[k+1][j]) {min=k+1;break;}
            else if(alph[min][j]<alph[k+1][j]) break;
            j++;
        }
        }
        //for(int j=i+1;j<n;j++){
        //     if(strcmp(alph[min],alph[j])>0) min=j;
        // }
    if(min!=i) swap(alph[min],alph[i]);
        
        
    }
}

int main(){
int n;
cout<<"Enter the no. inputs : ";cin>>n;
vector <string> alph(n);
cout<<"Enter the names: \n";
for(int i=0;i<n;i++){
    cin>>alph[i];
} 
sort(alph);
cout<<"\nsorted series : \n";
for(int i=0;i<n;i++){
    cout<<alph[i]<<endl;
}
    return 0;
}