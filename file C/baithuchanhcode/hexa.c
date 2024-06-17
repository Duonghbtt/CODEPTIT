#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		int i=0,a[100];
		while(n!=0){
			a[i]=n%16;
			n=n/16;
			i++;
		}
		int j;
		for(j=i-1;j>=0;j--){
			if(a[j]>9){
				printf("%c",a[j]+55);
			}
		else	printf("%d",a[j]);
		}
		printf("H\n");
	}
}
