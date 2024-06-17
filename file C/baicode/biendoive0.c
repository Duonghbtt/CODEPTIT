#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int dem =0,max=0,c,h;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]==1){
				dem++;
				if(max<dem){
					max=dem;
					h=i;
					c=j;
				}
			}
		}
	}
	int cnt=0;
	while(max!=0){
	for(i=1;i<=h;i++){
		for(j=1;j<=c;j++){
			if(a[i][j]==1) a[i][j]=0;
			else a[i][j]=1;
		}
	}
	dem =0,max=0,c,h;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]==1){
				dem++;
				if(max<dem){
					max=dem;
					h=i;
					c=j;
				}
			}
		}
	}
	cnt++;
    }
    printf("%d",cnt);
}
