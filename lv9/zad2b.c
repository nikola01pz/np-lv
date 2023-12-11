#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>

int fun ()
{
	uint64_t y =1;
	uint8_t i;
	uint64_t fact = 1;
	uint8_t n = 19;

	while (y <= 100000)
	{
		while (i <= n)
		{
			fact *=i;i++;
		}
		fact = 1;y++;
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
