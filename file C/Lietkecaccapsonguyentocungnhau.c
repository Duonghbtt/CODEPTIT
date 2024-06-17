#include<stdio.h>
int gcd(int a,int b){
	int t;
	if((a>0)&&(b>0)){
		while(b!=0){
			t=b;
			b=a%b;
			a=t;
		}
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j;
	for(i=a;i<b;i++){
		for(j=i+1;j<=b;j++){
			if(gcd(i,j)==1){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
}
