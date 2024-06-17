#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;

int n , m; // n : so luong dinh , m so luong canh
 // input : danh sach ke 

vector<pair<int,int>> adj[maxn];

struct canh{
    int x , y , w;
};

bool used[maxn]; // used[i]=true : i thuoc tap V(MST), used[i]=false : i thuoc v 

void nhap(){
    cin >> n >> m;
    // nhap ds canh -> ds ke
    for(int i = 0 ; i < m ;i++){
        int x,y,w;
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    memset(used,false,sizeof(used));
}

void prim(int u){
    vector<canh> MST; // cay khung
    int d = 0; // chieu dai cay khung
    used[u]=true; // dua dinh u vao V(MST)
    while(MST.size()<n-1){
        // e = (x,y) : Canh ngan nhat co x thuoc V va y thuoc V(MST)
        int min_w = INT_MAX;
        int X,Y; // luu 2 dinh cua canh e;
        for(int i = 1 ;i <= n ;i++){
            // Neu dinh i thuoc tap V (MST)
            if(used[i]){
                // duyet ds ke cua dinh i
                for(pair<int,int> it : adj[i]){
                    int j = it.first , trongso = it.second;
                    if(!used[j] && trongso < min_w){
                        min_w = trongso;
                        X=j ; Y = i;
                    }
                }
            }
        }
        MST.push_back({X,Y,min_w});
        d+=min_w;
        used[X]= true; // cho dinh X vao V (MST) , loai X kho tap V
    }
    cout << d << endl;
    for(canh e : MST){
        cout << e.x <<" "<< e.y<<" "<< e.w << endl;
    }
}
int main(){
    nhap();
    prim(1);
}

