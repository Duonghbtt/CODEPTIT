#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	map <int,int> mp;
	
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int ans=0;
		for(int i =0 ;i<n;i++){
			if(mp[a[i]]>=2) ++ans;
		}
		cout << ans << endl;	
		}
}

