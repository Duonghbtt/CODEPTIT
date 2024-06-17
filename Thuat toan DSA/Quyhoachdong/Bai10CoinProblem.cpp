#include <bits/stdc++.h>
using namespace std;
	long long mod= 1e9+7;
	long long a[1000001] , dp[1000001];
int main(){
	int n ;
	long long k;
	cin >> n >> k;
	for(int i = 1 ; i<= n;i++){
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ;i++) dp[a[i]]=1;
	for(int i = 2 ; i<= k ; i++){
		dp[i]=1e9;
		for(int j = 1 ; j<=n;j++){
			if(i-a[j]>=0){
				dp[i] = min (dp[i] , dp[i-a[j]]+1);
			}
		}
	}
	for(int i = 0 ; i <= k ; i++){
		cout << dp[i] <<" ";
	}
	if(dp[k]!=1e9) cout << dp[k];
	else cout << -1 ;
	
}