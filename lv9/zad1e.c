#include <stdint.h>

uint16_t f = 1;
uint16_t g = 2;
uint16_t e = 0;

int main()
{
	e += f;
	e += g;
	return 0;
}
