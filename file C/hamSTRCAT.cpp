#include<stdio.h>
#include<string.h>
int main() {
	char s[100],s1[100];
	printf("Hay nhap s: ");
	gets(s);
	printf("Hay nhap s1: ");
	gets(s1);
	strcat(s,s1);
	puts(s);
	return 0;
}
