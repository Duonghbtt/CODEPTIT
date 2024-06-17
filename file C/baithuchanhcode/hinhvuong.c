#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int u=c-a,v=d-b;
		if(u==v) printf("YES\n");
		else printf("NO\n");
	}
}
