#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool visited[1005];

void dfs2(int u){
	cout << u << " ";
	check[u]=true;
	for(int v : ke[u]){
		if(visited[v]==false){
			dfs(v);
		}
	}
}

void dfs(int u){
    stack<int> st;
    st.push(u);
    visited[u]=  true;
    cout << u <<" ";
    while(!st.empty()){
        int v = st.top();
        st.pop();
        for(int s : ke[v]){
            if(visited[s]==false){
                cout << s <<" ";
                visited[s]=true;
                st.push(v);
                st.push(s);
                break;
            }
        }
    }
}
int main(){
    int v , e , u;
    cin >> v >> e >>  u;
    for(int i = 1 ; i <= e ; i++){
        int x , y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1 ; i <= v ; i++){
        sort(ke[i].begin() , ke[i].end());
    }
    memset(visited , false , sizeof(visited));
    dfs(u);
}