#include <iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter x : ";
cin>>x;
cout<<"Enter y : ";
cin>>y;
if(x>0 && y>0) cout<<"First quadrant";
else if(x<0 && y<0) cout<<"Third quadrant";
else if(x>0 && y<0) cout<<"Second quadrant";
else if(x<0 && y>0) cout<<"Fourth quadrant";
else if(x==0 && y==0) cout<<"Origin";
else if(x==0 && y!=0) cout<<"On y-axis";
else if(y==0 && x!=0) cout<<"On x-axis";


    return 0;
}