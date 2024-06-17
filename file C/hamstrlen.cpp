#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	printf("Ban hay nhap chuoi \n");
	gets(s);
	int dodai=strlen(s);
	printf("DO dai chuoi la %d",dodai); 
	return 0;
}
