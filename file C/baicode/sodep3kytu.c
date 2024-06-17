#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
int i;
	for (i = 2; i <= trunc(sqrt(n)); i++) {
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();

	while (t--) {
		char s[501];
		gets(s);

		int len = strlen(s);
		bool check = true;
		int lim = (len % 2 == 0) ? len / 2 - 1 : len / 2;
int i;
		for (i = 0; i <= lim; i++) {
			int digit = s[i] - '0';

			if (!isPrime(digit) || s[i] != s[len - i - 1]) {
				check = false;
				break;
			}
		}

		if (check == true) printf("YES");
		else printf("NO");
		printf("\n");

	}

	return 0;
}
                    
