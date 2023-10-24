#include <stdio.h>
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}
