#include <bits/stdc++.h>

using namespace std;

map<int,int> mp;
 const int maxn = 10000000;
 int a[maxn],n;
 
// cach 1 dung map 
// cach 2 tim ucln

int gcd ( int a ,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
		int res =0;
		for(int i = 0;i<n;i++){
			res=gcd(res,a[i]);
		}
		ì(res==1){
			cout << 0 << endl;
			continue;
		}
		int ans=1 ;// chinh no
		for( int i = 2 ; i<=sqrt(res); i++){
			if(res%i==0){
				++ans;
				if(i!=res/i) ++ans;
			}
		}
		cout << ans << endl;
	}
}
