#include<stdio.h>
#include<math.h>
int songuyento(long long n){
	if((n==0)||(n==1)){
		return 0;
	}
	else{
	long long i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
    }
}
int tong(long long n){
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
	if(t<10){
	long long i;
	long long a=pow(10,t-1);
	long long b=pow(10,t)-1;
	int dem=0;
	for(i=a;i<=b;i++){
		int sum=tong(i);
		if(songuyento(i)&&songuyento(sum)){
			printf("%lld ",i);
			dem++;
		}
	}
	if(dem=0){
		printf("0");
	}
}
}
