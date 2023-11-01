#include "main.h"
#include <stdlib.h>
/**
 * _strdup - dup strin
 * @str: the stri
 * Return: the dup stri
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate_str = malloc((len + 1) * sizeof(char));
	if (duplicate_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		duplicate_str[i] = str[i];
	duplicate_str[len] = '\0';
	return (duplicate_str);
}
