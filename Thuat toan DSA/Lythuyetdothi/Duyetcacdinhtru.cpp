#include<bits/stdc++.h>
using namespace std;

int n ;
int matrix[1001][1001];
bool visited[1001];
// Nguyễn Thế Dương B22DCKH023
void Init(){
    cin >> n;
    for(int i =1 ; i<=n;i++){
        for(int j =1 ; j <=n ;j++){
            cin >> matrix[i][j];
        }
        visited[i]=false;
    }
}

int DFS(int u ){
    int cnt = 0;
    stack<int> st;
    st.push(u);;
    cnt++;
    visited[u]=true;
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int t = 1 ; t <=n ;t++){
            if(visited[t]== false && matrix[s][t]==1){
               cnt++;
               visited[t]= true;
               st.push(s);
               st.push(t);
               break; 
            }
        }
    }
    return cnt;
}

void duyet_tru(){
    for(int u = 1 ; u<=n;u++){
        visited[u]=true;
        if(u==1){
            if(DFS(2)==n-1)
                cout << u <<" khong phai la dinh tru" << endl;
            else
                cout << u << " la dinh tru " << endl;
        }
        else{
            if(DFS(1)==n-1)
              cout << u <<" khong phai la dinh tru" << endl;
            else
                cout << u << " la dinh tru " << endl;
        }
        for(int i = 1 ; i <=n ;i ++){
            visited[i]=false;
        }
    }
}
// Nguyễn Thế Dương B22DCKH023
int main(){
   Init();
   duyet_tru();
}