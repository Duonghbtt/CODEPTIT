#include <bits/stdc++.h>
using namespace std;
int n , m , st; 
vector<int> adj[1005];
bool used[1005];

void bfs(int u ){
   queue<int> q;
   q.push(u);
   used[u]=true;
   while(!q.empty()){
    int x = q.front();
    q.pop();
    cout << x << " ";
    for(int y : adj[x]){
        if(used[y]==false){
        	q.push(y);
        used[y]=true;
		}
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
    bfs(st);
}