#include<stdio.h>
#include<math.h>
int SNT(int n){
	if(n<2){
		return 0;
	}
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
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
int fibonaci(int n){
	n=tong(n);
	if(n==0||n==1){
		return 1;
	}
	long long fn2=0,fn1=1;
	int i;
	for(i=3;i<=93;i++){
		long long fn=fn1+fn2;
		if(fn==n){
			return 1;
		}
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++){
		if((SNT(i)==1)&&(fibonaci(i)==1)){
			printf("%d ",i);
		}
	}
}
