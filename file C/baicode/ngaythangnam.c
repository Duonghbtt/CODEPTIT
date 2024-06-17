#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int nam,tuan,ngay;
	nam=a/365;
	tuan=(a-nam*365)/7;
	ngay=a-nam*365-tuan*7;
	printf("%d %d %d",nam,tuan,ngay);	
	return 0;
}
