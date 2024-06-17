#include <bits/stdc++.h>

using namespace std;

using ll = long long;

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
		int n;
		cin >> n;
		int a[n];
		vector<vector<int>>v;
		for (auto &x : a) cin >> x;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] > a[j]) swap(a[i], a[j]);
			}
			vector<int>tmp(a, a + n);
			v.push_back(tmp);
		}
		for (int i = v.size() - 1; i >= 0; i--) {
			cout << "Buoc " << i + 1 << ": ";
			for (auto x : v[i]) cout << x << " ";
			cout << endl;
		}
	}
	return 0;
}