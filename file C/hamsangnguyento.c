#include<stdio.h>
#include<math.h>
//neu ban muon sang cac so nguyen to khong vuot qua n
//phai tao duoc 1 mang co kich thuoc n+1 phan tu
int  prime[1000001];
void sieve() {
	//coi tat ca cac so tu 0 toi n la so nguyen to
	int i,j;
	for(i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<=1000;i++){
		if(prime[i]==1){
			for(j=i*i;j<=1000000;j+=i){
				 prime[j]=0;
			}
		}
	}
}
int main() {
	sieve();
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++){
		printf("%d ",prime[i]);
	}
}
