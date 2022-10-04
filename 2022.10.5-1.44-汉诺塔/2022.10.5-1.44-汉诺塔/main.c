#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void move(int n, int x, int y, int z) {
	if (n == 1) {
		printf("%c --> %c\n", x, z);
	}
	else {
		move(n - 1, x, z, y);
		printf("%c --> %c\n", x, z);
		move(n - 1, y, x, z);
	}
}

int main() {
	int h;
	printf("\ninput number:\n");
	scanf("%d", &h);
	printf("The step to moving %2d disked:\n", h);
	move(h, 'a', 'b', 'c');

	return 0;
}