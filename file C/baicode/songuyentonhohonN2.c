#include<stdio.h>
int prime[1000001];
void sang(){
	int i;
	for(i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime [0]=prime[1]=0;
	int j;
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
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++){
		if(prime[i]==1)
	printf("%d\n",i);
}
}

