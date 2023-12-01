#include <stdio.h>
#include "file3.h"

int global_variable = 5;

int increment()
{
	global_variable++;
	printf("%d\n", global_variable);
	return 0;
}
