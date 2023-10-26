#include <stdio.h>

int is_prime_helper(int n, int i);
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}
/**
 * is_prime_helper - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_helper(n, i - 1));
	}
}
