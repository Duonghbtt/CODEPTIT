#include<stdio.h>
#include<math.h>
int sothuannghich(int n){
	int sum =0;
	int u=n;
	while(n!=0){
		sum=(n%10)+sum*10;
		n=n/10;
	}
	if(sum==u) return 1;
	else return 0;
}
int chiahet10(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a=pow(10,n-1);
		int b=pow(10,n)-1;
		int i;
		int dem=0;
		for(i=a;i<=b;i++){
			if((sothuannghich(i)==1)&&(chiahet10(i)==1)){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
