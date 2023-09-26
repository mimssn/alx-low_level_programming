#include "main.h"
/**
 * _strchr - Entry point
 * @a: input
 * @b: input
 * Return: Always 0 (Success)
*/
char *_strchr(char *a, char b)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
