#include <stdio.h>

//extern int global_variable;
static int global_variable;

int init()
{
	global_variable = 5;
	printf("init global: %d", global_variable);
	return 0;
}
