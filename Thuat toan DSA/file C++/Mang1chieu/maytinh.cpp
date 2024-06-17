#include <bits/stdc++.h>

using namespace std;

int main() {
	int n , c;
	cin >> n >> c;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=1;
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]<=c){
			++cnt;
		}
		else cnt=1;
	}
	cout << cnt << endl;
}
