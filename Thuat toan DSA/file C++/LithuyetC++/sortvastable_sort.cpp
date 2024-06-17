#include <bits/stdc+.h>
#include <algorithm>

using namespace std;

// sort
// stable_sort
// cach viet comparator

//bool cmp(int a , int b){ // sap xep giam dan
//	if(a>b) return true; // a se dung truoc b 
//	else return false;
//}

bool cmp(int a , int b){
	return abs(a)>abs(b);
}
int main(){
	int n ;
	cin >> n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n); // ham sap xep a[x] -> a[y] sort(a+x,a+y+1) 
	// se sap xep theo thu tu tang dan
	for(int i =0 ;i<n;i++){
		cout << a[i] << " ";
	}
	sort(a,a+n,cmp);
	sort(a,a+n,greater<int>()) // se sep theo thu tu giam dan
	// sort(a.begin(),a.end());
	// dung greater<kieudulieu> de sap xep giam
	// ham sort co the xep ki tu trong xau , va sap xep cac xau
	// ham sort sap xep pair thi theo thu tu first tang dan 
	// stable_sort : bubble , insertion sort , merge sort : tinh on dinh cua thuat toan sap xep
	// nó se giu tinh on dinh vi tri ban dau
	// vd : sap xep cac phan tu trong mang theo thu tu gia tri tuyet doi tang dan 
	// Input : 1 -1 2 1 5 -2 -5 
	// Output : 1 -1 1 2 -2 5 -5 
	
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	stable_sort(a,a+n,cmp);
	for(int x:a){
		cout << x << " ";
	}
}
