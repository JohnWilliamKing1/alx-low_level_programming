#include <stdio.h>
/**
 * print_to_98 - prints the natural numbs to 98
 * @n: the number to start from
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
n++;
else
n--;
}
printf("98\n");
}
