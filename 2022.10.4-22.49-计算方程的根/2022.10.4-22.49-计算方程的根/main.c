#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, disc, x1, x2, p, q;
	scanf("%f%f%f", &a, &b, &c);
	disc = b * b - 4 * a * c;
	p = -b / (2 * a);
	q = sqrt(disc) / (2 * a);
	x1 = p + q;
	x2 = p - q;
	printf("\n x1 = %5.2f\n x2 = %5.2f\n", x1, x2);

	return 0;
}