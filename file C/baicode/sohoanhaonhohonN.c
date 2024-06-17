#include<stdio.h>
#include<math.h>
int ktra(int n){
	int u=n;
	int i,sum=1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum=sum+i+n/i;
	}
}
	if(u==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++){
		if(ktra(i)==1){
			printf("%d ",i);
		}
	}
}
