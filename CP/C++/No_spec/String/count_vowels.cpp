#include <iostream>
using namespace std;
int main(){
string str;
getline(cin,str);
int n=str.length();
int count =0;
for(int i=0;i<n;i++){
    if((int)str[i]==65 || (int)str[i]==69 ||(int)str[i]==73 || (int)str[i]==79 ||(int)str[i]==85 || (int)str[i]==97 ||(int)str[i]==101 || (int)str[i]==105 ||(int)str[i]==111 || (int)str[i]==117  ) count ++;
    
}

cout<<"Total no. vowels are : "<<count;

    return 0;
}