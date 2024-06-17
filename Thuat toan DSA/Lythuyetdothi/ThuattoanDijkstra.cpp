#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 1000001;
int n , m , s;
vector<pair<int,int>> adj[maxn];

void nhap(){
    cin >> n >> m >> s;
    for(int i = 0; i< m;i++){
        int x,y,w;
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
}
const int INF = 1e9;
void Dijkstra(int s){
    // Mang luu khoang cach duong di;
    vector <ll> d(n+1,INF);
    d[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
    // {khoang cach , dinh}
    Q.push({0,s});
    while(!Q.empty()){
        // Chon ra dinh co khoang cach tu s nho nhhat
        pair<int,int> top = Q.top();
        Q.pop();
        int u = top.second;
        int kc = top.first;
        if(kc > d[u]) continue;
        // Relaxation : Cập nhật khoảng cách từ s cho tới mọi đỉnh kề với u
        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;
            if(d[v]> d[u]+w){
                d[v]=d[u]+w;
                Q.push({d[v],v});
            }
        }
    }
    for(int i =1;i <= n ;i++){
        cout << d[i] <<" ";
    }
}

int main(){
    nhap();
    Dijkstra(s);
}
