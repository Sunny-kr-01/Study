#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
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

};

vector<vector<int>> print_adjacency(int u,int v,vector<vector<int>> & adj){

}

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
    

    return 0;
}