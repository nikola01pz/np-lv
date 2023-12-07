#include <stdio.h>

int main(void)
{
	int array[5] = {11,22,33,44,55};
	int* ptr = &array[0];
	int** pptr = &ptr;
	ptr = ptr + 2;
	printf("%d", **pptr);
	return 0;
}
