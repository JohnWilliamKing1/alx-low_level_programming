#include "main.h"
#include <stdlib.h>
/**
 * count_words - ..
 * @str: ..
 * Return: ..
 */
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - ..
 * @str: ..
 * Return: ..
 */
int word_len(char *str)
{
	int i = 0, words = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		words++;
		i++;
	}
	return (words);
}
/**
 * count_words - ..
 * @str: ..
 * Return: ..
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}
/**
 * strtow - ..
 * @str: ..
 * Return: ..
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);
		strings[w] = malloc(sizeof(char) * (letters + i));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
