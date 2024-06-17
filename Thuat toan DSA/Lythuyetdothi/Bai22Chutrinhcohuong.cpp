#include <bits/stdc++.h>
using namespace std;

int n , m ;
vector <int> adj[1005];
int color[1005];

bool dfs(int u){
    color[u] = 1; // xam
    for(int v : adj[u]){
        if(color[v]==0){
            if(dfs(v)) return true;
        }
        else if(color[v]==1){
            return true;
        }
    }
    color[u]=2;
    return false;
}

int degree[1005];
bool bfs(int u){
    for(int i = 1 ; i <= n ; i++){
        for(int x : adj[i]){
            degree[x]++; // ban bac vao
        }
    }
    queue<int> q;
    for(int i = 1 ; i <= n ; i++){
        if(degree[i]==0){
            q.push(i);
        }
    }
    int cnt =0 ;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        ++cnt;
        for(int v : adj[u]){
            --degree[v];
            if(degree[v]==0){
                q.push(v);
            }
        }
    }
    if(cnt!=n ) return true;
    else return false;
}

int main(){
     cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
      //  adj[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(adj[i].begin() , adj[i].end());
    }
}