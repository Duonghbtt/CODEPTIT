#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long ans=0;
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			ans+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
	}
	cout << ans << endl;
}
