#include <stdio.h>

int sum(int n);

int main() {
	int n = 5;
	printf("sum(%d)�� ����� %d\n", n, sum(n));
	return 0;
}

int sum(int n)
{
	printf("sum(%d) ȣ��\n", n);
	if (n < 1) return 0;
	else return (n + sum(n - 1));
}