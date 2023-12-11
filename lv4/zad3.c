#include <stdio.h>

int main(void)
{
	int a = 11;
	const int* p = &a;
	p = p + 1;
	// *p = *p + 1;
	printf("%x,\t%d", p, *p);
	return 0;
}
