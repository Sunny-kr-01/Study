#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q){
    if(q.empty()) return;
    int taap=q.front();
    q.pop();
    reverse(q);
    q.push(taap);
}

int main(){
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<q1.front();
    reverse(q1);
    cout<<q1.front();



    return 0;
}