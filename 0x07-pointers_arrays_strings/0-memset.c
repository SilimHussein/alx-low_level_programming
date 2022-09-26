#include "main.h"
/**
 * _memset - fills block of memory with a particular value
 * @s: starting address of the memory to be filled
 * @b: value to be filled.
 * @n: size in bytes to be filled
 * Return: Character value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[1] = b;
	}
	return (s);
}
