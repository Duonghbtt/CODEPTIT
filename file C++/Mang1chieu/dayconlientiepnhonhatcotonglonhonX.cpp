#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int left =0 , res = 1e9;
		long long sum =0;
		for(int r = 0;r<n;r++){
			sum +=a[r];
			while(sum>x){
				res = min(res , r-left +1);
				sum -= a[left];
				++left;
			}
		}
		if(res==1e9) cout << "-1\n";
		else cout << res << endl;
	}
}
