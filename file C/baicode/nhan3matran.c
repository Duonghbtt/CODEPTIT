#include<stdio.h>
int main(){
	int m,n,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[m][n],b[n][p],c[p][q],d[m][p],e[m][q];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			int k;
			d[i][j]=0;
			for( k=0;k<n;k++){
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++){
 		for(j=0;j<q;j++){
			int k;
			e[i][j]=0;
			for( k=0;k<p;k++){
				e[i][j]+=d[i][k]*c[k][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d ",e[i][j]);
		}
		printf("\n");
 	}
}
