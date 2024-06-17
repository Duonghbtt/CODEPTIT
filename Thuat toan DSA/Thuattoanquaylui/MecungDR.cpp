#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int n ;
string s = "";
int ok;

void Try(int i , int j ){
	if(i==n&&j==n && s.size()!= 0){
		ok=1;
		cout << s <<" ";
	}
	if(i + 1 <= n && a[i+1][j]==1){
		s += "D";
		a[i+1][j]=0; // danh dau da di qua o nay roi
		Try(i+1,j);
		s.pop_back(); // xoa nuoc di cuoi cung
		a[i+1][j]=1;
	}
	if(j+1 <=n && a[i][j+1]==1){
		s += "R";
		a[i][j+1]=0;
		Try(i,j+1);
		s.pop_back();
		a[i][j+1]=1;
	}
		
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ok=0;
		cin >> n;
		for(int i = 1 ; i<=n;i++){
			for(int j = 1 ; j <=n ;j++){
				cin >> a[i][j];
			}
		}
		if(a[1][1]==0 || a[n][n]==0) cout << "-1" ;
		else{
		    a[1][1]=0;
			Try(1,1);
			if(ok==0) cout << "-1" ;
		}
		cout << endl;
	}
}