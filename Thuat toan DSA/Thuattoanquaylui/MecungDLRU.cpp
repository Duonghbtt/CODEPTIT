#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int n ;
string s = "";
int ok;
vector<string> v;

void Try(int i , int j ){
	if(i==n&&j==n){
		ok=1;
		v.push_back(s);
	}
	if(i + 1 <= n && a[i+1][j]==1){
		s += "D";
		a[i+1][j]=0; // danh dau da di qua o nay roi
		Try(i+1,j);
		s.pop_back(); // xoa nuoc di cuoi cung
		a[i+1][j]=1;
	}
	if(j-1 <=n && j-1 >= 1 && a[i][j-1]==1){
		s += "L";
		a[i][j-1]=0;
		Try(i,j-1);
		s.pop_back();
		a[i][j-1]=1;
	}
	if(j+1 <=n && a[i][j+1]==1){
		s += "R";
		a[i][j+1]=0;
		Try(i,j+1);
		s.pop_back();
		a[i][j+1]=1;
	}
	if(i-1 <= n && i-1 >=1 && a[i-1][j]==1){
		s += "U";
		a[i-1][j]=0;
		Try(i-1,j);
		s.pop_back();
		a[i-1][j]=1;
	}
		
}
void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << -1;
        return;
    }

    a[1][1] = 0;
    Try(1, 1);

    if (v.empty()) {
        cout << -1;
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}
int main(){
 	int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}