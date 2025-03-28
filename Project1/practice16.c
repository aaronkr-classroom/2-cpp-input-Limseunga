#include <stdio.h>

int sum(int n);

int main() {
	int n;
	scanf_s("%d", &n);

	printf("sum(%d)ÀÇ °á°ú: %d", n, sum(n));
}

int sum(int n) {
	if (n == 0) return 0;

	int result = 0;

	for (int i = 1; i <= n; i++) {
		result += i;
	}

	return result;
}