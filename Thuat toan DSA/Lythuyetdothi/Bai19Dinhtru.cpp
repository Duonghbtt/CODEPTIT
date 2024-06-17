#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int parent[1005];
vector<int> vt;
int v , e ;

void dfs(int u){
	visited[u]=true;
	vt.push_back(u);
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

void tru(){
	int cc = tplt();
	for(int i = 1; i <= v ; i++){
		memset(visited,false, sizeof(visited));
		visited[i]=true;
		if(cc < tplt()){
			cout << i <<" ";
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
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1 ; i <= v ; i++){
        sort(ke[i].begin() , ke[i].end());
    }
		tru();
		
		cout << endl;
	}
}