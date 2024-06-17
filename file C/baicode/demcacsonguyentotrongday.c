#include<stdio.h>
#include<math.h>
int kiemtra(int n){
	if(n<2) return 0;
	else{
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main(){
	int t;
	scanf("%d ",&t);
	int u;
	for(u=1;u<=t;u++){
		int n;
		scanf("%d",&n);
		int a[n],i,b[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=0;
		}
		for(i=0;i<n;i++){
			if(kiemtra(a[i])==0){
				a[i]=0;
			}
		}
		int j;
		for(i=0;i<n-1;i++){
			int min=i ;
			for(j=i+1;j<n;j++){
				if(a[j]<a[min]){
					min=j;
				}
				int t=a[i];
				a[i]=a[min];
				a[min]=t;
			}
		} 
		printf("Test %d:\n",u);
		for(i=0;i<n;i++){
			if((a[i]>0)&&(b[i]!=-1)){
				int cnt =1;
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

