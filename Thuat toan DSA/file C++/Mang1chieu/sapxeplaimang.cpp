#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m ;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		 int pos[101]={0};
		for(int i=0;i<m;i++){
			int x;
			cin >> x;
			p[x-1]=1;
		}
		for(int i=0;i<n;i++){
			if(pos[i]==0) continue;
			int index =i;
			while(index <n && pos[index]){
				++index;
			}
			//[i,index]
			sort(a+i,a+index+1);
			i=index;
		}
		book ok = true;
		for(int i =0;i<n-1:i++){
			if(a[i]>a[i+1]){
				ok = false ; break ;
			}
		}
		if(ok == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
