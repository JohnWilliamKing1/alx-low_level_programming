#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: the string to get its length
 * Return: nothing
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
