#include <stdio.h>

//extern int global_variable;
static int global_variable;

int printing()
{
	printf("printing global: %d", global_variable);
	return 0;
}
