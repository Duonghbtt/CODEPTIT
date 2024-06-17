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
		int i;
		for (i = 0; i <= lim; i++) {
			int digit = s[i] - '0';
			//printf("%d\n", digit);
			if (digit % 2 != 0 || s[i] != s[len - i - 1]) {
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
