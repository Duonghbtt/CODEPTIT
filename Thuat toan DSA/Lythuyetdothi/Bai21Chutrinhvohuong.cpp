#include <bits/stdc++.h>
using namespace std;

int n , m ;
vector <int> adj[1005];
bool visited[1005];
int parent[1005];

bool dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            parent[v]=u;
            if(dfs(v)) return true;
        }
        else if(v != parent[u]){
            return true;
        }
    }
    return false;
}

bool bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int y : adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
                parent[y]=x;
            }
            else if(y!=parent[x]) return true;
        }
    }
    return false;
}

int main(){
     cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(adj[i].begin() , adj[i].end());
    }
}