#include <main.h>

/***/

void rev_string(char *s)
{
	int l, i;
	char temp;
	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;
	/*swap the string by looping to half string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because array starts from 0*/
		s[l - 1 -i] = temp;
	}
}
