#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;
	
	a = 98;
	b = 42;
	printf("value a : %d, value b : %d \n", a, b);
	swap_int(&a, &b);
	printf("new value a : %d, new value b : %d\n", a, b);
	return (0);
}
