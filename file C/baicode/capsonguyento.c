#include<stdio.h>
int prime[10001];
void sang(){
	int i,j;
	for(i=0;i<=10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<=100;i++){
		if(prime[i]==1){
			for(j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n%2==0){
		int i;
		for(i=0;i<=n/2;i++){
			if((prime[i]==1)&&(prime[n-i]==1)){
				printf("%d %d ",i,n-i);
			}
		}
		printf("\n");
}
}
}
