#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: the string
 */
char *cap_string(char *str)
{
int i = 0;
char c;
while ((c = str[i]) != '\0')
{
if (i == 0 || (c != ' ' && c != '\t' && c != '\n' && c != ',' &&
c != ';' && c != '.' && c != '!' && c != '?' && c != '"' &&
c != '(' && c != ')' && c != '{' && c != '}'))
{
if (c >= 'a' && c <= 'z')
{
str[i] -= 32;
}
}
i++;
}
return (str);
}
