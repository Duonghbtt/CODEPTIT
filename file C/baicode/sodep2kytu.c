#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t);
	getchar();

	while (t--) {
		char s[501];
		gets(s);

		int len = strlen(s);

		// printf("%d", len);

		bool check = true;

		int lim = (len % 2 == 0) ? len / 2 - 1 : len / 2;

		if (s[0] == '8' && s[len - 1] == '8') {

			int sum = 0;
int i;
			for (i = 0; i <= lim; i++) {

				int digit = s[i] - '0';

				if (s[i] != s[len - i - 1]) {
					check = false;
					break;
				}

				sum = sum + digit;
			}

			if (sum % 10 != 0) check = false;
		}
		else check = false;

		if (check == true) printf("YES");
		else printf("NO");
		printf("\n");

	}

	return 0;
}
