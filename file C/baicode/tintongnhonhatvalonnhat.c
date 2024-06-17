#include<stdio.h>
#include<math.h>
int chuyenso6(int a){
			int t=0;
		int a1=0;
		int u;
	while(a>0){
			if(a%10==5){
				u=pow(10,t);
				a1=6*u+a1;
			}
			else{
				u=pow(10,t);
				a1=a%10*u+a1;
			}
			t++;
			a=a/10;
		}
		return a1;
}
int chuyenso5(int a){
			int t=0;
		int a1=0;
		int u;
	while(a>0){
			if(a%10==6){
				u=pow(10,t);
				a1=5*u+a1;
			}
			else{
				u=pow(10,t);
				a1=a%10*u+a1;
			}
			t++;
			a=a/10;
		}
		return a1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d %d\n",chuyenso5(a)+chuyenso5(b),chuyenso6(a)+chuyenso6(b));
	}
}
