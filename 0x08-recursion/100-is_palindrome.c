#include "main.h"

/**
* is_palindrome - returns true if string is a palindrome
*@s: string checked
*Return: true if string is a palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - Returns length of a string.
 * @s:string measured
 * Return:length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks weather string is a palindrome.
 * @s:string checked
 * @len:length of s.
 * @index:index of the string checked.
 *
 * Return: If string is a palindrome - 1.
 *         If string is not - 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
