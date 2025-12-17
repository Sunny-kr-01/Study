#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class graph{
public:
    unordered_map<int,list<int>> adj;

void add_edge(int u,int v,bool directed){
    adj[u].push_back(v);

    if(directed==0){
        adj[v].push_back(u);
    }
}

void print(){
    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void BFS(){
    unordered_map<int,bool> visited;
    int src=0;
    queue<int> q;
    for(auto ele:adj){
        src=ele.first;
        if(!visited[src]){
            q.push(src);
            visited[src]=true;
        }
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        visited[temp]=true;
        for(int i:adj[temp]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
        cout<<temp<<" ";
    }
    }
}

};



int main(){
    graph g1;
    int n;
    cout<<"Eneter the no. of edges : ";
    cin>>n;
    int m;
    cout<<"Enter the no. of connections : ";
    cin>>m;
    cout<<"Enter the connections :\n";
    vector<vector<int>> adj;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g1.add_edge(u,v,0);
        adj.push_back({u,v});
    }
    g1.print();
    cout<<endl;
    int x;
    g1.BFS();

    return 0;
}