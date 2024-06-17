#include <bits/stdc++.h>
using namespace std;
int n , m , st; 
vector<int> adj[1005];
bool used[1005];

void dfs(int u ){
    used[u]=true;
    cout << u <<" ";
    for(int v : adj[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m >> st;
    for(int i = 0 ; i < m ; i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(adj[i].begin() , adj[i].end());
    }
    dfs(st);
}