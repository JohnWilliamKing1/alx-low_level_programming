#include "main.h"
/**
 *leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char leet_chars[] = "aAeEoOtTlL";
char leet_nums[] = "4433007711";
for (int i = 0; str[i] != '\0'; i++)
{
for (int j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_nums[j];
break;
}
}
}
return (str);
}
