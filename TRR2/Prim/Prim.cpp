#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
using namespace std;

int n, u;
int a[100][100],d[100],e[100];
int vs[100];
int WT=0;
vector<pair<int,int>> v;
void input() {
   	ifstream file("prim.txt", ios::in);
    file >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            file >> a[i][j];
        }
    }
}

void output() {
    cout << WT << endl;
    for(pair<int,int> it: v){
        cout << it.first << " " << it.second << endl;
    }
}

void Prim(){
    for(int v=1;v<=n;v++){
        vs[v]=0;
        d[v]=a[u][v];
        e[v]=u;
    }
    d[u]=0;
    e[u]=0;
    vs[u]=1;
    while(true){
        int s=0;
        int min=1e9;
        for(int v=1;v<=n;v++){
            if(vs[v]==0 && d[v] < min){
                min = d[v];
                s=v;
            }
        }
        if(s==0){
            return;
        }
        vs[s]=1;
        if(s< e[s]){
            v.push_back({s,e[s]});
        }
        else if(e[s]< s){
            v.push_back({e[s],s});
        }
        WT+=a[s][e[s]];
        for(int v=1;v<=n;v++){
            if(vs[v]==0 && d[v] > a[s][v]){
                d[v]=a[s][v];
                e[v]=s;
            }
        }
    }

}
int main(){
    input();
    cout << "Chon dinh bat dau: ";
    cin >> u;
    Prim();
    output(); 
}