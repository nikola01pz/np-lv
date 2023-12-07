#include <stdio.h>

int main(void)
{
	int array[5] = {11,22,33,44,55};
	int* ptr = &array[0];
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("%d,\t%d\n", *ptr, array[i]);
		ptr++;
	}
	return 0;
}
