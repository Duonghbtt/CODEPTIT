#include<stdio.h>
#include<math.h>
int prime[10000001];
void sang() {
	int i;
	for(i=0;i<=10000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	int j;
	for(i=2;i<=sqrt(10000000);i++){
		if(prime[i]==1){
			for(j=i*i;j<=10000000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int n;
	scanf("%d",&n);
	int i;	
	for(i=0;i<=10000000;i++){
	if(prime[i]==1){
				printf("%d\n",i);
				n--;
			}
	if(n==0){
		break;
	}
}
	return 0;
}
