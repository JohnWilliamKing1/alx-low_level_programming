#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @s: the string to be reversed
 * Return: a pointer
 */
char *string_toupper(char *s)
{
for (int i = 0; s[i]; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
}
return (s);
}
