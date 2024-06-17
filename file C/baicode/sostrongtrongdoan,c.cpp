#include <stdio.h> 
int giaithua(int n) {
    int a=1; 
    int i;
    for( i=1;i<=n;i++) {
        a=a*i;
	} 
    return a; 
} 
int main() { 
    int sum=0; 
    int a=1;
    int v,b,r; 
    scanf("%d %d",&v,&b);
    int i;
    if(v>b){
    	int y;
    	y=b;
    	b=v;
    	v=y;
	}
    for(i=v;i<=b;i++) {
        int k=i; 
        while(k!=0) {
            r=k%10;
            a=giaithua(r); 
            k=k/10;
            sum=sum+a; 
            
        } 
	if(sum==i) {
    	printf("%d ",i);
    } 
	sum=0; 
    }
	}
