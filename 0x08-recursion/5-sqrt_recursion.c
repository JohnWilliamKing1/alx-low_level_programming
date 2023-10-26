#include <stdio.h>
/**
 * _sqrt_helper - function checks if the square of i is greater tha
 * @n: The number whose square root is to be calculated.
 * @i: the counter
 * Return: The
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Calculates the square root of the integer n.
 * @n: the number to calc the sqrt
 * Return: the natural numbs
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}
