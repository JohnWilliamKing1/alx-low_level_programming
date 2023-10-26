#include <stdio.h>
/**
 * factorial - Calculates the factorial of the integer `n`.
 * @n: The integer whose factorial is to be calculated.
 * Return: The factorial of `n`, or -1 if `n` is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
