#include <stdio.h>
/**
 * _pow_recursion - Calculates the power of the integer
 * @x: The base of the power.
 * @y: The exponent of the power.
 * Return: The power of `x` raised to the power `y`, or -1 if `y` is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
