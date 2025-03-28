#include <stdio.h>

int sum(int n);

int main() {
	int n = 5;
	printf("sum(%d)의 결과는 %d\n", n, sum(n));
	return 0;
}

int sum(int n)
{
	printf("sum(%d) 호출\n", n);
	if (n < 1) return 0;
	else return (n + sum(n - 1));
}