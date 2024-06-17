#include<stdio.h>
int main() {
	long long int n;
	int a[18];
	int i;
	scanf("%lld",&n);
	for(i=0;i<18;i++){
		a[i]=n%10;
		n=n/10;
		if((a[i]!=2)&&(a[i]!=3)&&(a[i]!=5)&&(a[i]!=7)){
			a[i]=0;
		}
	}
	int dem1=0,dem2=0,dem3=0,dem4=0;
	for(i=0;i<18;i++){
		if(a[i]>0){
			if(a[i]==2){
				dem1++;
			}
			else if(a[i]==3){
				dem2++;
			}
			else if(a[i]==5){
				dem3++;
			}
			else if(a[i]==7){
				dem4++;
			}
		}
	}
	if(dem1>0){
		printf("2 %d\n",dem1);
	}
	if(dem2>0){
		printf("3 %d\n",dem2);
	}
	if(dem3>0){
		printf("5 %d\n",dem3);
	}
	if(dem4>0){
		printf("7 %d\n",dem4);
	}
}
