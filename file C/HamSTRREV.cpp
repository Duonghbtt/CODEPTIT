#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	printf("Ban hay nhap chuoi \n");
	gets(s);
	printf("CHuoi nguoc lai la %s",strrev(s)); 
	return 0;
}
