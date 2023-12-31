#include "main.h"

/**
* _strdup - returns pointer to a new allocated
*space in memory, that contains a copy of the
*string given as a parameter.
*@str:String to copy
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);

}
