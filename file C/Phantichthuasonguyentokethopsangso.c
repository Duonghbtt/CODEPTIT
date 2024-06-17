#include<stdio.h>
#include<math.h>
int prime[100001];
void sang(){
	int i,j;
	for(i=0;i<=100000;i++){
		prime[i]=i;
	}
	for(i=2;i<=sqrt(100000);i++){
		if(prime[i]){
			for(j=i*i;j<=100000;j+=i){
				if(prime[j]==j){
					prime[j]=i;
				}
			}
		}
	}
}
void phantich(int n){
	while(n!=1){
		int cnt=0;
		int tmp=prime[n];//thua so nguyen to nho nhat hien tai cua n
		while(n%tmp==0){
			cnt++;
			n/=tmp;
		}
		printf("%d(%d) ",tmp,cnt);
	}
	printf("\n");
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("Test %d: ",i);
		phantich(n);
	}
}
