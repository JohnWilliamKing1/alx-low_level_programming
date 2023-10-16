#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints the string in reverse
 * @s: the charact to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (length -= 1; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
