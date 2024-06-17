#include <bits/stdc++.h>
using namespace std;

int n , c[100][100] , X[100] , ans = INT_MAX;
int visited[100]; // mang danh dau
// X[i] : thanh pho thu i di qua 

void Try(int i , int dis){
	for(int j = 1 ; j <=n ;j++){
		if(!visited[j]){
			X[i]=j;
			visited[j]=1;
			dis+= c[X[i-1]][X[i]]; // Chi phi tu thanh pho i-1 den thanh pho i
			if(i==n){
				// cap nhat ket qua
				ans = min(ans , dis+c[X[n]][1]);
			}
			else{
				Try(i+1 , dis);
			}
			visited[j]=0;
			dis-= c[X[i-1]][X[i]];
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1 ; i <= n;i++){
		for(int j = 1 ; j <=n;j++){
			cin >> c[i][j];
		}
	}
	X[1]=1;
	visited[1]=1;
	Try(2,0);
	cout << ans << endl;
	
}