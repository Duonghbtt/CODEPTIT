#include<stdio.h>
#include<math.h>
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int min(int a,int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int dx = max(x2,x4)-min(x1,x3);
	int dy = max(y2,y4)-min(y1,y3);
	int canh=max(dx,dy);
	printf("%d",canh*canh);
}
