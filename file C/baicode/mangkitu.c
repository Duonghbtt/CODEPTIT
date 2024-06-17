#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
	char s[200];
	gets(s);

	int len = strlen(s);

	int arr[5] = { 0 };

	//  (), [], {}, '', "" 
int i;
	for (i = 0; i < len; i++) {
		if (s[i] == '(' || s[i] == ')') arr[0]++;
		if (s[i] == '{' || s[i] == '}') arr[1]++;
		if (s[i] == '[' || s[i] == ']') arr[2]++;
		if (s[i] == '\'') arr[3]++;
		if (s[i] == '\"') arr[4]++;
	}

	bool check = true;
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			check = false;
		}
	}

	if (check) printf("1");
	else printf("0");

	return 0;
}

