#include "main.h"
/**
* _pow_recursion - function returns value of x raised to the power of y
*@x: base number
*@y: the power number
*Return:value of x when raised to the power of y
*/
int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (_pow_recursion(x, y - 1) * x);
}
