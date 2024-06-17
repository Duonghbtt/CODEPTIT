#include <bits/stdc++.h>
#pragma gcc optimize("Ofast")
using namespace std;

using ll = long long;

int t, n;

vector<string>v;

void init() {
	queue<string>q;
	q.push("6");
	q.push("8");
	while (1) {
		string x = q.front();
		q.pop();
		if (x.size() == 18) break;
		v.push_back(x);
		q.push(x + "6");
		q.push(x + "8");
	}
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
	init();
	sort(v.begin(), v.end(), [](string a, string b)->bool{
		if (a.size() != b.size()) return a.size() < b.size();
		else return a < b;
	});
	cin >> t;
	while (t--) {
		cin >> n;
		vector<string>res;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].size() > n) break;
			res.push_back(v[i]);
		}
		for (int i = res.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}