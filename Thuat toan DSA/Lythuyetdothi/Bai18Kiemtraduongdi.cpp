#include <bits/stdc++.h>
using namespace std;
int n , m , s , t;  
vector<int> adj[1005];
bool used[1005];
int tplt[1005];
int cnt;
void dfs(int u ){
    used[u]=true;
    tplt[u]=cnt;
    for(int v : adj[u]){
        if(!used[v]){
            dfs(v);
        }
    }
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
    cnt = 0 ;
    for(int i = 1  ; i <= n ; i++){
        if(!used[i]){
            cnt++;
            dfs(i);
        }
    }
    int q;
    cin >> q;
    while(q--){
        int x , y;
        cin >> x >> y;
        if(tplt[x]==tplt[y]) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }

    
}