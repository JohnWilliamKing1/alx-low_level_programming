#include <stdio.h>
/**
 * _puts - prints a string
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
