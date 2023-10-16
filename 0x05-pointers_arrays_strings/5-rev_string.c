#include "main.h"
/**
 * rev_string - reverses the string
 * @s: the string to be rever
 * Return: nothing
 */
void rev_string(char *s)
{
int length = 0, i = 0;
char tmp;
while (s[i++])
length++;
for (i = length - 1; i >= length / 2; i--)
{
tmp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = tmp;
}
}
