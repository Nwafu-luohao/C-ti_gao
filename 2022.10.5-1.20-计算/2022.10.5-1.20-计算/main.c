#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long f2(int q) {
	long c = 1;
	int i;
	for (i = 1; i <= q; i++) {
		c *= i;
	}
	return c;
}

long f1(int p) {
	int k;
	long r;
	k = p * p;
	r = f2(k);
	return r;
}

int main() {
	int i;
	long s = 0;
	for (i = 2; i <= 3; i++) {
		s += f1(i);
	}
	printf("\ns = %ld\n", s);

	return 0;
}