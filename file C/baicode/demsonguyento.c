#include<stdio.h>
#include<math.h>
int ktra(int n){
	if(n==0||n==1){
		return 0;
	}
	else{
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
}
int NT(int n){
	int t=0;
	while(n!=0){
		t=n%10;
		if(ktra(t)==0){
			return 0;
			break;
		}
		n=n/10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int i;
		int dem=0;
		for(i=a;i<=b;i++){
			if(ktra(i)==1){
				if(NT(i)==1){
					dem++;
				}
			}
		}
		printf("%d\n",dem);
	}
}
