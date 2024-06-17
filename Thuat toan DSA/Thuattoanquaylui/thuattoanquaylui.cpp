#include<bits/stdc++.h>

using namespace std;
// Quay lui xau nhi phan co do dai N 
/*
int N , X[100];
void inkq(){
	for(int i = 1;i<=N;i++){
		cout << X[i];
	}
	cout << endl;
}

void Try(int i){
	// Duyet cac kha nang cua  X[i]
	for(int j = 0 ;j<=1;j++){
		X[i]=j;
		if(i==N){
			inkq();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	cin >> N ;
	Try(1);
	return 0 ; 
} 
*/

// To hop chap k cua N 

/*
int N , X[100] , K;
void inkq(){
	for(int i = 1;i<=K;i++){
		cout << X[i];
	}
	cout << endl;
}

// i : N-K+i
// i : X[i-1]+1
void Try(int i){
	// Duyet cac kha nang cua  X[i]
	for(int j = X[i-1] + 1 ;j<=N-K+i;j++){
		X[i]=j;
		if(i==K){
			inkq();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	cin >> N >> K  ;
	Try(1);
	return 0 ; 
} 
*/

// Hoan vi N phan tu 

/*
int N , X[100] , used[100];
void inkq(){
	for(int i = 1;i<=N;i++){
		cout << X[i];
	}
	cout << endl;
}

void Try(int i){
	// Duyet cac kha nang cua  X[i]
	for(int j = 1;j<=N;j++){
		if(used[j]==0){
			X[i]=j;
			used[j]=1;
			if(i==N){
				inkq();
			}
			else{
				Try(i+1);
			}
			used[j]=0;
		}
	}
}
int main(){
	cin >> N ;
	memset(used,0,sizeof(used));
	Try(1);
	return 0 ; 
} 

*/

// Bai toan N quan hau

// X[i]=j nghia la ta xep quan hau hang thu i nam o cot j
// Co 2*n-1 duong cheo xuoi va 2*n-1 duong cheo nguoc
// O(i,j) bij duong cheo xuoi i - j + n quan ly va duong cheo nguox i+j-1 quanly

int N , X[100] , cot[100] , d1[100] , d2[100];
int a[100][100];

void inkq(){
	memset(a,0,sizeof(a));
	for(int i=1;i<=N;i++){
		a[i][X[i]]=1;
	}
	for(int i = 1;i<=N;i++){
		for(int j =1 ;j<=N ;j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void Try(int i){
	// Duyet cac kha nang ma X[i] co the nhan duoc
	for(int j = 1 ; j <= N ;j++){
		// Chuan bi gan X[i]=j
		if(cot[j]==1&&d1[i-j+N]==1&&d2[i+j-1]==1){
			X[i]=j;
			cot[j]=d1[i-j+N]=d2[i+j-1]=0;
			if(i==N){
				inkq();
			}
			else{
				Try(i+1);
			}
			// backtrack
			cot[j]=d1[i-j+N]=d2[i+j-1]=1;
		}
	}
}
int main(){
	cin >> N ;
	for(int i =1;i<=99;i++){
		cot[i]=d1[i]=d2[i]=1;
	}
	Try(1);
	return 0 ; 
} 
