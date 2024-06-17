#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[n];
		}
		long long sum =0;
		for(int i=0;i<n;i++) sum=sum+a[i];
		long long left =0;
		int cnt=0;
		for(int i=0;i<n;i++){
			sum=sum-a[i];
			if(sum==left){
				cout << i << " ";
				cnt++;
			}
			left = left + a[i];
		}
		if(cnt==0) cout << "-1" << endl;
		else cout << endl;
	}
}
