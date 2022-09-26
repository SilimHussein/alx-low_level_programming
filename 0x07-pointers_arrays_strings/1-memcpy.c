#include "main.h"
/**
 * _memcpy - copies characters from memory source to memory
 * destination.
 * @dest: pointer to array where content is to be copied
 * @src: pointer to source data that is to be copied.
 * @n: number of bytes to be copied.
 * Return: pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
