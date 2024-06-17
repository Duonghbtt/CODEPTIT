#include<stdio.h>
int showtuoi() {
	int tuoi = 25;
	if(tuoi> 18) {
	 printf("Ban da du tuoi");
	 return 1;
	}
    printf("Ban chua du tuoi");
    return 0;
}
int  main() {
	showtuoi();
}
