#include "main.h"
/**
 *leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i = 0;
char c;
for (; str[i] != '\0'; i++)
{
c = str[i];
if (c == 'a' || c == 'A')
{
str[i] = '4';
}
else if (c == 'e' || c == 'E')
{
str[i] = '3';
}
else if (c == 'o' || c == 'O')
{
str[i] = '0';
}
else if (c == 't' || c == 'T')
{
str[i] = '7';
}
else if (c == 'l' || c == 'L')
{
str[i] = '1';
}
}
return (str);
}
