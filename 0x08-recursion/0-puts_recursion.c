#include <stdio.h>
/**
 * _puts_recursion - print the string
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
