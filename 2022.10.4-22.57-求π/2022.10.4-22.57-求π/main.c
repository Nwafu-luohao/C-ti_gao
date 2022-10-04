#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
// 用π/4 = 1-1/3 +1/5-1/7+....公式求π
int main() {
	int s;
	float n, t, pi;
	t = 1;
	pi = 0;
	n = 1.0;
	s = 1;
	while (fabs(t) > 1e-6) {
		pi += t;
		n += 2;
		s = -s;
		t = s / n;
	}
	pi *= 4;
	printf("pi = %10.6f\n", pi);

	return 0;
}