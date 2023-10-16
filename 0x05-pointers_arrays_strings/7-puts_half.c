#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
int i = 0;
int k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
k = (i - 1) / 2;
k += 1;
}
else
{
k = i / 2;
}
for (; k < i; k++)
{
_putchar(str[k]);
}
_putchar('\n');
}
