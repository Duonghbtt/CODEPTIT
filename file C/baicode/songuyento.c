#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n<2){
			printf("NO\n");
		}
		else{
			int i;
			int dem=1;
			for(i=2;i<=sqrt(n);i++){
				if(n%i==0){
					dem=0;
					break;
				}
			}
			if(dem==0) printf("NO\n");
			else printf("YES\n");
		}
	}
}
