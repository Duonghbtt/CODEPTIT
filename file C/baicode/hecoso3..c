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
		char s[100];
		gets(s);

		bool check = true;
int i;
		for (i = 0; i < strlen(s); i++) {
			if (s[i] == '1' || s[i] == '2' || s[i] == '0') {
				check = true;
			}
			else {
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
                    
