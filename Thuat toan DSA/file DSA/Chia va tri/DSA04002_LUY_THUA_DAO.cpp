#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

ll reverse(ll n) {
	ll r = 0;
	while (n) {
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}

ll powMod(ll a, ll b) {
	if (b == 1) return a;
	ll x = powMod(a, b / 2);
	if (b % 2) return (x % mod * x % mod * a) % mod;
	else return (x % mod * x % mod) % mod;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << powMod(n, reverse(n)) << endl;
	}
	return 0;
}