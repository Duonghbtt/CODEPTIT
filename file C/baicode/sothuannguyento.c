#include<stdio.h>
#include<math.h>
int songuyento(int n){
	if(n==0||n==1) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int chuso(int n){
	while(n!=0){
		if(songuyento(n%10)==0) return 0;
		n=n/10;
	}
	return 1;
}
int tong(int n){
	int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a>b){
			int tmp=a;
			a=b;
			b=tmp;
		}
		int dem=0;
		int i;
		for(i=a;i<=b;i++){
			if(songuyento(i)&&chuso(i)&&songuyento(tong(i))){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
