#include <bits/stdc++.h>
using namespace std;

set<int> ke[1005];
bool visited[1005];
vector<pair<int,int>> vt;
int v , e ;


void dfs(int u){
	visited[u]=true;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

int tplt(){
	int cnt = 0 ;
	for(int i = 1 ; i <= v ; i++){
		if(!visited[i]){
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}

void cau(){
	int cc = tplt();
	for(auto it : vt){
		int x = it.first;
		int y = it.second;
		ke[x].erase(y);
		ke[y].erase(x);
		memset(visited,false, sizeof(visited));
		if(cc < tplt()){
			cout << x <<" " << y << " ";
		} 
		ke[x].insert(y);
		ke[y].insert(x);
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
			ke[x].insert(y);
			ke[y].insert(x);
		}
//		for(int i = 1 ; i <= v ; i++){
//        sort(ke[i].begin() , ke[i].end());
//    }
		cau();
		cout << endl;
	}
}