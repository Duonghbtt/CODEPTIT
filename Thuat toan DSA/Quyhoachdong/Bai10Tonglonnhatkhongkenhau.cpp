#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		int a[n+1];
		for(int i = 1 ; i <= n;i++){
			cin >> a[i];
		}
		long long F[n+1]={0};
		F[1]=a[1];
		for(int i = 2 ; i<=n ;i++){
			F[i]=max(F[i-1] , F[i-2]+a[i]);
		}
		cout << F[n] << endl;
	}
}