#include <stdio.h>

/*Summation x + y*/
int sum(int x, int y){
	return x + y;
}

/*Subtraction x - y*/
int subtract(int x, int y){
	return x - y;
}

/*Calculation*/
int calculation(int (*mathOperation)(int, int), int x, int y){
	return (*mathOperation)(x, y);
}

int main(){
	int a = calculation(sum, 10, 2);
	printf("Summation result: %d\n", a);
	int b = calculation (subtract, 10, 2);
	printf("subtracting result: %d\n", b);
}
