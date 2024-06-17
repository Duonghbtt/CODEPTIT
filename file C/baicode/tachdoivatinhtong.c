#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

char s3[200];
int len = 0;

void copyS1(char a[]) {
	int n = 0;
	int i;
	for (i = 0; i < strlen(s3) / 2; i++) {
		a[n++] = s3[i];
	}
	a[n] = '\0';
}

void copyS2(char b[]) {
	int n = 0;
	int i;
	for (i = strlen(s3) / 2; i < strlen(s3); i++) {
		b[n++] = s3[i];
	}
	b[n] = '\0';
}


void sum(char s1[], char s2[]) {

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int dif = abs(len1 - len2);

	int len = (len1 > len2) ? len1 : len2;
	int r = 0;
	char c;

	int len3 = 0;
int i;
	for ( i = len - 1; i >= 0; i--) {

		int a, b;

		if (len1 > len2) {
			a = s1[i] - '0';
			b = (i - dif < 0) ? 0 : s2[i - dif] - '0';
		}
		else {
			a = (i - dif < 0) ? 0 : s1[i - dif] - '0';
			b = s2[i] - '0';
		}

		int t = a + b + r;
		if (t >= 10) {
			t = t - 10;
			r = 1;
		}
		else r = 0;
		c = t + '0';

		s3[len3++] = c;

	}

	if (r == 1) s3[len3++] = '1';
	s3[len3] = '\0';
	for (i = 0; i < strlen(s3) / 2; i++) {
		char c = s3[i];
		s3[i] = s3[strlen(s3) - i - 1];
		s3[strlen(s3) - i - 1] = c;
	}
}

int main() {
	gets(s3);

	int kt = 0;

	while (true) {
		char s1Tmp[200], s2Tmp[200];

		copyS1(s1Tmp);
		copyS2(s2Tmp);

		sum(s1Tmp, s2Tmp);
int i;
		for (i = 0; i < strlen(s3); i++) {
			printf("%c", s3[i]);
		}

		printf("\n");
		if (strlen(s3) == 1) break;
	}

	return 0;
}
                    
