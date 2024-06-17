#include<stdio.h>
int main() {
	int a,b,t,i;
	scanf("%d %d",&a,&b);
//	if((a<b)&&(b==2)) {
//		printf("2");
//	}	
//	if((a>=2)&&(b>a)) {
//		t=a;
//	}
//	if((a<=2)&&(b>=2)) {
//		t=2;
//	}	
    if(a<b) {
    	if(a>=2) {
    		t=a;
		}
		else {
			if(b>=2){
				t=2;
			}
		}	
	for(t;t<=b;t++) {
		i=2;
		while((t%i)!=0) {
			i++;
		}
		if(i==t) {
		printf("%d ",t);
		}
	}
	}
		return 0 ;
}
