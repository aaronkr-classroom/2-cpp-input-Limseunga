#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sum(int n);

int main() {
	clock_t start, stop;
	double duration;

	start = clock();
	int n;
	scanf_s("%d", &n);
	printf("sum(%d) : %d\n", n, sum(n));
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f 초입니다. \n", duration);
	return 0;

}

int sum(int n) {
	if (n == 0) return 1;
	return n * sum(n - 1);
}
