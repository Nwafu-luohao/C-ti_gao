#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	int m, i, k;
	scanf("%d", &m);
	k = sqrt(m);
	for (i = 2; i <= k; i++) {
		if (m % i == 0) {
			break;
		}
	}
	if (i >= k + 1) {
		printf("%d is a prime number\n", m);
	}
	else {
		printf("%d is not a prime number\n", m);
	}

	return 0;
}