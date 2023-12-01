#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#define CAESAR_SHIFT  3

int main(void)
{
	void *lib_handle;
	int (*fn)(const char*, char*, int);
	char *error;

	char in[100] = "the QUICK brown FOX jumps over THE lazy DOG";
	char encrypted[100];
	char decrypted[100];

	lib_handle = dlopen("/home/rtrk/Nikola_Istvanic/lv8_caesar12/Debug/liblv8_caesar12.so", RTLD_LAZY);
	if (!lib_handle)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}

	printf("Caesar cipher (shift %d) :\n", CAESAR_SHIFT);

	fn = dlsym(lib_handle, "encryptCaesar");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s\n", error);
		exit(1);
	}
	(*fn)(in, encrypted, CAESAR_SHIFT);
	printf("Original: %s\nencrypted: %s\n", in, encrypted);

	fn = dlsym(lib_handle, "decryptCaesar");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s\n", error);
		exit(1);
	}
	(*fn)(encrypted, decrypted, CAESAR_SHIFT);
	printf("decrypted: %s\n", decrypted);
	printf("\n");

	dlclose(lib_handle);

	return EXIT_SUCCESS;
}
