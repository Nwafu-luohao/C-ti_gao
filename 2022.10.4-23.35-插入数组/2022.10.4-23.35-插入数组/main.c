#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 0;
	int j = 0; 
	int p = 0;
	int q = 0;
	int s = 0;
	int n = 0; 
	int a[] = {
		127,3,6,28,54,68,87,105,162,18,0
	};
	for (i = 0; i < 10; i++) {
		p = i;
		q = a[i];
		for (j = i + 1; j < 10; j++) {
			if (q < a[j]) {
				p = j;
				q = a[j];
			}
		}
		if (p != i) {
			s = a[i];
			a[i] = a[p];
			a[p] = s;
		}
		printf("%d ", a[i]);
	}
	printf("\n\nPlease input a number: \n");
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		if (n >= a[i]) {
			break;
		}
	}
	int index = i;
	for ( int j = 9; j >= index; j--) {
		a[j + 1] = a[j];
	}

	a[index] = n;
	
	for (int i = 0; i <= 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}