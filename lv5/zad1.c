#include <stdio.h>

int product(int a, int b);

int main(void)
{
	int a = 5;
	int b = 8;
	int c;
	c = product(a, b);
	printf("Umnozak broja a = %d i broja b = %d je %d i %d", a, b, c, a*b);
	return 0;
}

int product(int a, int b)
{
	a = 7;
	b = 5;
	return a*b;
}
