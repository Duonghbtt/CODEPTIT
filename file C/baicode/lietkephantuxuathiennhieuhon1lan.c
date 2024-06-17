#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j,b[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	int dem=0,u=0;
	for(i=0;i<n;i++){
		if(b[i]!=-1){
			int cnt=1;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					b[j]=-1;
					cnt++;
				}
			}
		if(cnt>1){
			c[u]=a[i];
			dem++;
			u++;
		}
		}
	}
	printf("%d\n",dem);
	for(i=0;i<dem;i++){
		printf("%d ",c[i]);
	}
}
