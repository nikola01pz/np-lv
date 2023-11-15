#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int number = 0;
	printf("Enter number of elements: ");
	scanf("%d", &number);
	printf("Enter array numbers:\n");
	float* ptr;
    ptr = (float*)calloc(number, sizeof(float));

	for(int i = 0;i<number;i++)
	{
		scanf("%f", &ptr[i]);
	}
	for(int i= 0;i<number;i++)
	{
		printf("%.2f ", ptr[i]);
	}
	float max = 0;
	for(int i= 0; i<number;i++)
	{
		if (ptr[i] > max){
			max = ptr[i];
		}
	}
	printf("\n%.2f", max);

}
