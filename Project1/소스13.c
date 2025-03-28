#include <stdio.h>

int sum(int a);
double sumP(double a);

int main() {
	int n;
	scanf_s("%d", &n);
	printf("sum(%d) : %d\n", n, sum(n));
	printf("sumP(%d) : %f", n, sumP(n));
}

int sum(int a) {
	printf("sum(%d) 호출\n", a);
	if (a == 1) return 1;

	return (a + sum(a - 1));

}

double sumP(double a) {
	printf("sumP(%d) 호출\n", a);
	if (a == 1) return 1;

	return (1 / a + sumP(a - 1));
}