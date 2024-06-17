#include <bits/stdc++.h>
using namespace std;
// Ma trận kề
// Danh sách cạnh
// Danh sách kề

int n ;
int a[1001][1001];
vector<int> adj[1001];
vector<pair<int,int>> edge;
// Nguyễn Thế Dương - B22DCKH023

int main(){
    cin >> n;
    cin.ignore();
    for(int i =1 ; i<=n;i++){
        string s , num;
        getline(cin,s);
        stringstream ss(s);
        while(ss >> num){
            if(stoi(num)>i){
                edge.push_back({i,stoi(num)});
            }
        }
    }
    for(auto it : edge){
        cout << it.first <<" "<<it.second << endl;
    }
}