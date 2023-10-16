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
for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
