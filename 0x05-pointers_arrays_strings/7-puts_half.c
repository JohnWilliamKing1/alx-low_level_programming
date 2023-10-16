#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
int start = length % 2 == 0 ? length / 2 : (length - 1) / 2;
for (int i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
