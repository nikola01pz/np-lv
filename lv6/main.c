#include <stdio.h>
#include <string.h>
int main(void)
{
 char* str = "napredno programiranje";
 printf("%s\n", str);
 str[0] = "N";
 printf("%s\n", str);
 return 0;
}
