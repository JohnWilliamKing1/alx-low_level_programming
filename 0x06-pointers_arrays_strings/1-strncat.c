#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes
 * Return: a ointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
for (int i = 0; i < n && src[i] != '\0'; i++)
{
*dest_end = src[i];
dest_end++;
}
*dest_end = '\0';
return (dest);
}
