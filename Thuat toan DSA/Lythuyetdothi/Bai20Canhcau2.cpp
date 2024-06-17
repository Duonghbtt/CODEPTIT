#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int parent[1005];
vector<pair<int,int>> vt;
int v , e  ;

void dfs(int u , int s , int t){
	visited[u]=true;
	vt.push_back(u);
	for(int v : ke[u]){
        if(u==s && v == t || u == t && v==s) continue;
		if(!visited[v]){
			dfs(v);
		}
	}
}

int tplt(int s , int t){
	int cnt = 0 ;
	for(int i = 1 ; i <= v ; i++){
		if(!visited[i]){
			cnt++;
			dfs(i , s , t);
		}
	}
	return cnt;
}

void cau(){
	int cc = tplt(0,0);
	for(auto it : vt){
		int x = it.first;
		int y = it.second;
		memset(visited,false, sizeof(visited));
		if(cc < tplt(x,y)){
			cout << x <<" " << y << " ";
		} 
		
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visited,false, sizeof(visited));
		cin >> v  >> e ;
		for(int i = 1 ; i <= v ; i++){
			ke[i].clear();
		}
		for(int i = 1 ; i <= e ; i++){
			int x , y;
			cin >> x >> y;
			vt.push_back({x,y});
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1 ; i <= v ; i++){
       sort(ke[i].begin() , ke[i].end());
   }
		cau();
		cout << endl;
	}
}