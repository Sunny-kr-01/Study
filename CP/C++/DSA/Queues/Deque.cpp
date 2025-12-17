//deque : double eneded queue
#include <bits/stdc++.h>
using namespace std;
int main(){
deque<int> dq1;
dq1.push_back(3);
dq1.push_back(4);
dq1.push_back(5);
dq1.push_front(2);
dq1.push_front(1);
dq1.push_front(0);
while(!dq1.empty()){
    cout<<"Front : "<<dq1.front()<<endl;
    cout<<"Back : "<<dq1.back()<<endl;
    dq1.pop_back();
    dq1.pop_front();
}

    return 0;
}