// vo cuc thay bang 1000000001
// n la so dinh
// q la so truy van duong di
#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[100][100],d[100][100],e[100][100];
int vs[100];
vector<pair<int,int>> v;
void input() {
    ifstream inp("floyd1.txt"); 
    inp >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            inp >> a[i][j]; 
        }
    }
    inp.close(); 
}

void output() {
    for(pair<int,int> it:v){
   	cout << "----------------------------------------------------" << endl;
        if(d[it.first][it.second]==1000000001){
            cout << "Khong co duong di tu " << it.first << " den " << it.second << endl;
        }
        else{
            cout << "Duong di tu " << it.first << " den " << it.second << " la: " <<"d["<<it.first<<"]["<<it.second<<"] = "<< d[it.first][it.second] << endl;
            int u=it.first,v=it.second;
            int t=v;
            cout << v;
            while(e[u][t]!=u){
                t=e[u][t];
                cout << " <- " << t;
            }
            cout << " <- " << u << endl;
        }  
    }
}

void floyd(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j]=a[i][j];
            e[i][j]=i;
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j] > d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                    e[i][j]=k;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(d[i][i] < 0){
            return;
        }
    }
}
void solve(){
    input();
    cout << "Nhap so lan truy van ";
    cin >> q;
    for(int i = 1; i <= q ; i ++){
    	cout << "Nhap lan thu " << i <<" : " << endl;
    	int x , y;
    	cout << "Nhap dinh bat dau : ";
    	cin >> x;
    	cout << "Nhap dinh ket thuc : ";
    	cin >> y;
    	v.push_back({x,y});
	}
    floyd();
    output(); 
}

int main() {
    solve();
    return 0;
}