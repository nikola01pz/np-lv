#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>

int fun ()
{
	uint64_t y;
	uint64_t fact = 1;
	uint8_t n = 19;
	uint8_t i;

	for (y = 1; y <= 100000; y++)
	{
		for (i = 1; i <= n; i++)
		{
			fact *=i;
		}
		fact = 1;
	}
	return (fact);
}

int main()
{
	clock_t t;
	t = clock();
	fun();
	t = clock() -t;
	double potrebno_vrijeme= ((double)t)/CLOCKS_PER_SEC;  // in secondsprintf("fun() traje %f sekundi \n", potrebno_vrijeme);return 0;}
}
