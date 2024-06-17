#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int sc,sh,u;
		int i,j;
		scanf("%d %d %d",&sh,&sc,&u);
		int a[sh][sc];
		for(i=1;i<=sh;i++){
			for(j=1;j<=sc;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int v;
		for(j=1;j<sc;j++){
			int min=j;
			for(v=j+1;v<=sh;v++){
				if(a[v][u]<a[min][u]){
					min = v;
				}
				swap(&a[j][u],&a[min][u]);
			}
		}
		for(i=1;i<=sh;i++){
			for(j=1;j<=sc;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
