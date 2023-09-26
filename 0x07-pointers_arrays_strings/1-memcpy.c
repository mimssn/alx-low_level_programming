#include "main.h"
/**
 * _memcpy - function copies memory area
 * @mar: memory where is stored
 * @src: memory where is copied
 *  *@n: number of bytes
 *
 *  Return: copied memory with n byte changed
*/

char *_memcpy(char *mar, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		mar[r] - src[r];
		n--;
	}
	return (mar);
}
