#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool ls(int a[],int n,int x){ // Linear Search 
	for(int i=0;i<n;i++){
		if(a[i]==x)
		return true;
	}
	return false ;
}

bool bs(int a[],int n,int x){// Binary Search
	int l=0,r=n-1;
	while(l<=r){
		int m =(l+r)/2 ;// l + (r-l)/2
		if(a[m]==x){
			return true;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return false;
}

bool binary_search(int a[],int l , int r , int x ){ // dung de quy
	if(l>r) return false;
	int m = (l+r)/2;
	if(a[m]==x) return true;
	else if (a[m]<x) return binary_search(a,m+1,r,x);
	else return binary_search (a,l,m-1,x);
}

// ham co san binary_search(a+x,a+y,key) --> a[x] -> a[y-1]
// binary_search(v.begin()+x,v.begin()+y,key)--> v[x]->v[y-1] -> dung cho vector
// binary_search(v.begin(),v.end(),key)

// tim vi tri phan tu dau tien cua 1 phan tu x trong 1 mang da sap xep
int first_pos(int a[],int n , int x){
	int res = -1;
	int l =0 , r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			r=m-1;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else r = m-1;
	}
	return res ;
}

// tim vi tri phan tu cuoi cung cua 1 phan tu x trong 1 mang da sap xep
int last_pos(int a[],int n , int x){
	int res = -1;
	int l =0 , r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			l=m+1;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else r = m-1;
	}
	return res ;
}

// Ap dung cho mang , vecto duoc sap xep , set , map cua 2 ham duoi nhu sau : 
// ham lower_bound(iter1,iter2,key) tim [iter1,iter2) -> Tra ve vi tri cua phan tu dau tien >= key
// dung auto cho de
// Neu ma tat ca cac phan tu trong mang deu nho hon key -> tra ve iter2 
// ham upper_bound(iter1,iter2,key) tim [iter1,iter2) -> tra ve vi tri dau tien cua phan tu > key
// Neu tat ca cac phan tu trong mang deu nho hon key -> tra ve iter 2;
int main(){
	//thuat toan tim kiem tuyen tinh Linear Search
	// O(n)
	// thuat toan tim kiem nhi phan Binary Search
	// O(logn)
	// dk : Cac phan tu phai  duoc sap xep tang dan , giam dan
	// lower_bound
	int n , x;
	cin >> n >> x;
	int a[n];
	for(int i =0 ; i<n ;i ++){
		cin >> a[i];
	}
	auto it = lower_bound(a,a+n,x); // tim vi tri dau tien cua phan tu >= x nam trong mang a
	cout << *it << endl; // tra gia tri
	cout << it-a <<endl; // tra vi tri
}

