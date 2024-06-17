#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	return (b,a%b);
}

const int maxn = 1000;

int a[maxn];

// cach 2;
map <int,int> mp;

void solve(){
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			mp[i]++;
			if(i!=n/i) mp[n/i]++;
		}
	}
}
int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		int res =1;
//		for(int i=0;i<n;i++){
//			for(int j=i+1;j<n:j++){
//				res = max(res,gcd(a[i],a[j]));
//			}
//		}
//		cout << res << endl;
//	}
// cach 2
	int t ; 
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0 ;i <n;i++){
			cin >> a[i];
			solve(a[i]);
		}
	}
	int res =1;
	for(auto it:mp){
		if(it.second>=2){
			res = it.first;
		}
	}
	cout << res << endl;
	mp.clear(); // de tranh loi chong chat len nhau 
}
