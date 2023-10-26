#include <stdio.h>
#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Calculates the square root of the integer n.
 * @n: the number to calc the sqrt
 * Return: the natural numbs
 */
int _sqrt_recursion(int n)
{
		return (sqrt(n, 1));
}
/**
 * _sqrt - function checks if the square of i is greater tha
 * @n: The number whose square root is to be calculated.
 * @i: the counter
 * Return: The
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
