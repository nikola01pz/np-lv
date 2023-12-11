#include <stdint.h>

int main (void)
{
    const /*volatile*/ uint16_t local = 10;
    uint16_t *ptr = (uint16_t*) &local;
    printf("Inicijalna vrijednost varijable local: %d\n", local);
    *ptr = 100;
    printf("Promijenjena vrijednost varijable local: %d\n", local);
    return 0;
}

