#include<stdio.h>
#include<math.h>
int prime[100001];
void sang(){
	int i,j;
	for(i=0;i<100000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<=sqrt(100000);i++){
		if(prime[i]==1){
			for(j=i*i;j<100000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int tong(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	if(sum%5==0) return 1;
	else return 0;
}
int main(){
	sang();
	int n;
	scanf("%d",&n);
	int i;
	int dem=0;
	for(i=2;i<n;i++){
		if((prime[i]==1)&&(tong(i))){
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
