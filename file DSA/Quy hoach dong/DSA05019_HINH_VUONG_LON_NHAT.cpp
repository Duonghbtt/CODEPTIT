#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a[1005][1005];
int dp[1005][1005];
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
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		int ans = 0;
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j]) {
					if (i == 1 || j == 1) {
						dp[i][j] = 1;
					} else {
						dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + 1;
					}
				}
				ans = max(ans, dp[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}