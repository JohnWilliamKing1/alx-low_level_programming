#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: viod
 */
void times_table(void)
{
int i;
int j;
int product;
i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
product = i *j;
if (j == 0)
{
_putchar(product + '0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
