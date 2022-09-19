#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: input integer
 * @b: another input interger
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
