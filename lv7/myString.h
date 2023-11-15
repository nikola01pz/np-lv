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
	char newText[] = "";
	int size = stringLength(str);

	printf("%d", size);
	//printf("%s", newText);
}
