#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: empty
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size - i - 1; j++)
_putchar(' ');
for (int j = 0; j <= i; j++)
_putchar('#');
_putchar('\n');
}
}
