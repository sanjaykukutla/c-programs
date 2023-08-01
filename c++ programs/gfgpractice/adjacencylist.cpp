#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> ad[],int u,int v){
    ad[u].push_back(v);
    ad[v].push_back(u);
}
void printedgelist(vector<int>ad[],int V){
    for(int i=0;i<V;i++){
        cout << "\n Adjacency list of vertex " << i ;
        for(auto x:ad[i]){
            cout << "->"<<x;
        }
        printf("\n");
    }
}
int main(){
int v=5;
vector<int> adj[v];
addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printedgelist(adj, v);
    return 0;
}