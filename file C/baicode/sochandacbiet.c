#include<stdio.h>
#include<string.h>
int main() {
	int t,i,ok;
	scanf("%d",&t);
	while(t--) {
		char c[18];
		scanf("%s",&c);
		for(i=0;i<strlen(c);i++) {
			if(c[i]%2!=0) {
				ok=1;
				break;
			}
			ok=0;
		}
		if(ok==0) {
			printf("YES\n");
		}
		if(ok==1) {
			printf("NO\n");
		}
	}
	return 0;
}
