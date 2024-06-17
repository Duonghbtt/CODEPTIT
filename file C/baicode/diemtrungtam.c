#include<stdio.h>
int check(int xA,int yA,int xB,int yB,int xC,int yC){
	if((xA-xB)*(yB-yC)==(xB-xC)*(yA-yB)){
		return 1;
	}
	else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int x[100001],y[100001];
	int logic=0;
	//logic =0 khi cac diem van thang hang
	//logic =1 khi co  1 diem khong thang hang
	int i;
	for(i=0;i<n-1;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<n-3;i++){
		if(check(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2])==0){
			logic =1;
			break;
		}
	}
	if(logic ==0) printf("Yes");
	else printf ("No");
}
