#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	int m, i, k, n = 0;
	for (m = 101; m <= 200; m += 2) {
		k = sqrt(m);
		for (i = 2; i <= k; i++) {
			if (m % i == 0) {
				/*printf("%d ", m);*/
				break;
			}
		}
		/*printf("i = %d\n", i);
		printf("k = %d\n", k + 1);*/
		if (i >= k + 1) {
			printf("%d ", m);
			n++;
		}
		if (n % 10 == 0 && n!= 0) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}