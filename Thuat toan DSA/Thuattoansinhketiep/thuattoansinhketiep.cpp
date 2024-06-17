#include<bits/stdc++.h>

using namespace std;
/*
- Cau hinh dau tien 
- cau hinh cuoi cung 
- phuong phap sinh 

<ktao cau hinh dau tien >
while(<khi chua phai cau hinh cuoi cung>){
	<in ra cau hinh hien tai>
	<sinh ra cau hinh tiep theo>
}

// Xau nhi phan co do dai n 
int n , a[100], ok;

void ktao(){
	for(int i = 1;i<=n;i++){
		a[i]=0;
	}
}

void sinh(){
	// bat dau tu bit cuoi cung va di tim bit 0 dau tien 
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0; // day chinh la cau hinh cuoi cung 
	}
	else{
		a[i]=1;
	}
}
int main(){
	cin >> n;
	ok = 1;
	ktao();
	while(ok){
		for(int i =1;i<=n;i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0 ;
}
*/
// Sinh tap con k phan tu cua tap n phan tu 
/*
int n ,k, a[100], ok;
void ktao(){
	for(int i = 1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(){
	int i =k ;
	// n-k+i
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j = i+1;j<=k;++j){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin >> n >> k;
	ok = 1;
	ktao();
	while(ok){
		for(int i =1;i<=k;i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0 ;
}

*/

// Sinh hoan vi cua n phan tu 

/*
int n , a[100], ok;

void ktao(){
	for(int i = 1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(){
	int i = n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok = 0;
	}
	else{
		// di tim thang > a[i] trong doan [i+1,n];
		int j=n;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		int l = i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l;--r;
		}
	// ham reverse dung de lat nguoc	reverse(a+i+1,a+n+1);
	}
}

// ham next_permutation (a,a+n) : ham hoan vi co san , sinh ra hoan vi tiep
// ham luu han vo dia chi mang a khi sinh ra hoan vi cuoi sinh ra false thi return false
// Dung ham do while
// ham prev_permutation(a,a+n): ham hoan vi co san , sinh ra hoan vi truoc no
int main(){
	cin >> n;
	ok = 1;
	ktao();
	while(ok){
		for(int i =1;i<=n;i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0 ;
}
*/

// Sinh phan hoach nguyen cua so tu nhien n - phan tich duoi dang tong 

int n,a[100],ok,cnt;
void ktao(){
	cnt = 1;
	a[1]=n;
}
void sinh(){
	int i = cnt;
	while(i>=1&&a[i]==1){
		--i;
	}
	if(i==0){
		ok =0 ;
	}
	else{
		a[i]--;
		int d = cnt - i +1 ;
		cnt = i; 
		int q = d/a[i];
		int r = d% a[i];
		if(q){
			for(int j = 1 ; j <= q;j++){
				++ cnt;
				a[cnt]=a[i];
			}
		}
		if(r){
			++ cnt;
		a[cnt]=r;
		}
	}
}
int main(){
	cin >> n;
	ok = 1;
	ktao();
	while(ok){
		for(int i =1;i<=cnt;i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0 ;
}
