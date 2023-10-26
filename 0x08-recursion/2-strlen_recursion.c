#include <stdio.h>
/**
 * _strlen_recursion - Calculates the length of the string
 * @s: A pointer to the string whose length is to be calculated.
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
