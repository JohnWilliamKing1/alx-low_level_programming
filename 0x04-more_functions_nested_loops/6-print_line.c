#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: the numbs of line sto draw
 * Return: a stright line
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
