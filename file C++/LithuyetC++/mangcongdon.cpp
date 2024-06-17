#include <bits/stdc++.h>

using namespace std;

int main(){
	// tinh tong tu vi tri left -> right
	// lam binh thuong mat O(n)
	int n;
	cin>> n;
	int a[n];
	for(int &x:a) cin>> x;
	int q;
	cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		int sum=0;
		for(int i=l;i<=r;i++){
			sum+=a[i];
		}
		cout << sum << endl;
	}
	// dung Prefix Sum co O(1)
	// pre[k]=tong tu 1 -> n
	//[l,r]: pre[r]-pre[l-1]
	int n; cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int prefix[n+1]={0};
	for(int i=1;i<=n;i++){
		prefix[i]=prefix[i-1]+a[i];
	}
	int q; cin>>q;
	while(q--){
		int l,r;
		cin >> l >> r;
		cout << prefix[r]-prefix[l-1] << endl;
	}
	// Prefix Sums tren mang 2 chieu : tinh tong theo hinh chu nhat
	// cach thong thuong
	int n,m;
	cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int h1,h2,c1,c2;
		int sum=0;
		cin >> h1  >> h2 >> c1 >> c2;
		for(int i=h1;i<=h2;i++){
			for(int j=c1;j<=c2;j++){
				sum +=a[i][j];
			}
		}
		cout << sum << endl;
	}
	// cach 2 : prefix[i][j] : tong tat ca phan tu cua hcn bat dau tu hang 1 den hang i , cot 1 den cot j
	//prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+arr[i][j];
	// sum = prefix[A][B]-prefix[a-1][B]-prefix[A][b-1]+prefix[a-1][b-1] vs i tu a den A va j tu b den B
	int n,m;
	cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int prefix[n+1][m+1]={0};
	//memset(prefix,0,sizeof(pre));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int h1,h2,c1,c2;
		int sum=0;
		cin >> h1  >> h2 >> c1 >> c2;
		sum = prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1];
		cout << sum << endl;
	}
}
