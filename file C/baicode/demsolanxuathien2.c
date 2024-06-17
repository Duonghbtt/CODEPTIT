#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int u;
	for(u=1;u<=t;u++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=0;
		}
		printf("Test %d:\n",u);
		for(i=0;i<n;i++){
			if(b[i]!=-1){
				int cnt=1;
				for(j=i+1;j<n;j++){
					if(a[i]==a[j]){
						cnt++;
						b[j]=-1;
					}
				}
				printf("%d xuat hien %d lan\n",a[i],cnt);
			}
		}
	}
}
