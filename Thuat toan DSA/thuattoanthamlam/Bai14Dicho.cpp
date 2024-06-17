#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , s, m;
    cin >> n >> s >> m;
    int song = s * m;
    int songaydicho = s - (s/7) ;
    int tongdicho = songaydicho * n;
    if(tongdicho < song) cout  << -1 << endl;
    else{
        cout << (song + n - 1) / n << endl;
    }

}