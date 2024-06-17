#include <bits/stdc++.h>
using namespace std;

void selectionsort (int a[],int n){
	for(int i=0;i<n;i++){
		// dung 1 bien de luu chi so cua phan tu nho nhat
		int min_pos=i;
		// Duyet tat ca cac phan tu dung sau phan tu hien tai va cap nhat chi so cua phan tu nho nhat
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
	swap(a[i],a[min_pos]);
	}
}

void bubblesort (int a[],int n){
	for(int i =0;i<n-1;i++){
		for(int j =0 ; j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

void insertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		// Lay ra phan tu o chi so i 
		int x=a[i],pos=i-1; 
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
}

int cnt[10000001];
void countingsort (int a[n],int n){
	
}
int main(){
	int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// sap xep chon ( Selection Sort) O(n^2)
	selectionsort(a,n);
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
	// sap xep noi bot (BubbleSort) O(n^2)
	bubblesort(a,n);
	// sap xep chen (Insertion sort) O(n^2)
	insertionsort(a,n);
	// sap xep dem phan phoi ( Counting Sort) (O(n+k))
	int a[1000],n;
	cin >> n;
	int m = INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		m=max(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j< cnt[i];j++){
				cout << i << " ";
			}
		}
	}
	return 0;
}
