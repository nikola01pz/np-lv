#include <stdio.h>

int main(void)
{
	int a = 5;
	int* p = &a;
	printf("%ld,\t%d,\t%x,\t%x,\t%ld,\t%x,\t%ld\t", a, sizeof(a), &a, p, sizeof(p), &p, *p);
	return 0;
}
