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
	int result = 0;
	for (int i = 1; i <= a; i++) {
		result += i;
	}

	return result;

}

double sumP(double a) {
	printf("sumP(%d) 호출\n", a);
	double result = 0;
	for (int i = 1; i <= a; i++) {
		result += 1.0/i;
	}

	return result;
}