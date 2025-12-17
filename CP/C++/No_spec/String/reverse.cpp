#include <iostream>
#include <algorithm>
using namespace std;
int main(){
string x="reverse";
cout<<x<<endl;
reverse(x.begin(),x.end());
cout<<x<<endl;
reverse(x.begin(),x.end());
cout<<x<<endl;
reverse(x.begin()+1,x.begin()+5);//maybe.begin()+x,begin()+y reverses characters from xth index to (y-1)th index
cout<<x<<endl;
    return 0;
}