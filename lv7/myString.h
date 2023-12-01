#include <stdlib.h>

int stringLength(char str[])
{
	int length = 0;
	for(int i=0; str[i]!='\0';i++) {
		length++;
	}
	return length;
}

void stringTrim(char str[])
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
	printf("%d", count);
	printf("\n%s", str);
}
