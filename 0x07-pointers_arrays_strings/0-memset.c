#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @t: constant char byte
 * @u: number of bytes to fill
 * @s: pointers to allocated memory
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char t, unsigned int u)
{
	unsigned int i;

	i = 0;
	while (i < u)
	{
		s[i] = t;
		i++;
	}
	return (s);
}
