#include "main.h"
/**
 * _isalpha - checks for alpha character
 * @c: The character to be checked
 * Return: 1 for alpha character or 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
