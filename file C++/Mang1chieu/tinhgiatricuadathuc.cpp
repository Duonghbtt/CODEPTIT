#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD=100000007;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll lt=1,res=0;
		for(int i =n-1;i>=0;i--){
			res=res+a[i]*lt;
			res%=MOD;
			lt*=x;
			lt*=MOD;
		}
		cout << res;
	}
}
