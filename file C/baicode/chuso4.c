#include<stdio.h>
#include<math.h>
int so(int n){
	while(n!=0){
		if(n%10==4){
			return 0;
			break;
		}
		n=n/10;
	}
	return 1;
}
int sothuannghich(int n){
	int t=0,u=n;
	while(n!=0){
		t=t*10+n%10;
		n=n/10;
	}
	if(u==t) return 1;
	return 0;
}
int chiahet10(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	if(sum%10==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,a=pow(10,n-1),b=pow(10,n);
		for(i=a;i<b;i++){
			if(so(i)==1){
				if(sothuannghich(i)==1){
					if(chiahet10(i)==1){
						printf("%d ",i);
						
					}
				}
			}
		}
		printf("\n");
	}
	
}
