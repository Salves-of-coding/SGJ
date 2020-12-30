#include <stdio.h>

int main()
{
	int a, b;
	int n1, n2, n3;
	scanf("%d%d", &a, &b);
	n1 = b / 100;
	n2 = (b % 100) / 10;
	n3 = (b % 10);
	printf("%d\n", a * n3);
	printf("%d\n", a * n2);
	printf("%d\n", a * n1);
	printf("%d\n", a * b);
	return 0;
}