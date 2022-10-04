#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long ff(int n) {
	long f;
	if (n < 0) {
		printf("n<0, input error");
	}
	else if (n == 0 || n == 1) {
		f = 1;
	}
	else {
		f = ff(n - 1) * n;
	}
	return f;
}

int main() {
	int n;
	long y;
	printf("\ninput a inteager number:\n");
	scanf("%d", &n);
	y = ff(n);
	printf("%d! = %d\n", n, y);

	return 0;
}