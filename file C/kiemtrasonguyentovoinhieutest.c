#include<stdio.h>
#include<math.h>
int prime[1000001];
void sang() {
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
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(prime[n]==1){
			printf("YES\n");
		}
		else{
		printf("NO\n");
	}}
}
