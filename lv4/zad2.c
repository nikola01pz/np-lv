#include <stdio.h>

int main(void)
{
	int a = 5;
	int* p;
	p = p + 1;
	*p = *p + 1;
	printf("%x,\t%d", p, *p);
	return 0;
}
