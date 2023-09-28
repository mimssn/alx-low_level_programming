#include "main.h"
/**
* _strlen_recursion - show string length
* @s: string measured
*Return: string length
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
