#include<stdio.h>
#include<string.h>
int main() {
	char s[100],s1[100];
	printf("Ban hay nhap chuoi s :");
	gets(s);
	printf("Ban hay nhap chuoi s1 :" );
	gets(s1);
	if(strstr(s,s1)==NULL) {
		printf("NO");
	}
	else {
		printf("YES");
	}
	
	return 0;
}
