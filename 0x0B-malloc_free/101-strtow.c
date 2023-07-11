#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts words in a string
 * @s: string
 * Return: word count
 */

int count_word(char *s)
{
	int i;
	int cnt = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			cnt = 0;
		else if (cnt == 0)
		{
			cnt = 1;
			j++;
		}
	}
	return (j);
}

/**
 * **strtow - splits a string into words
 * @str: string
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **ptr, *p;
	int j, k = 0, len = 0, num, i = 0, m, n;

	while (*(str + len))
		len++;
	num = count_word(str);
	if (num == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (num + 1));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (i)
			{
				n = j;
				p = (char *) malloc(sizeof(char) * (i + 1));
				if (p == NULL)
					return (NULL);
				while (m < n)
					*p++ = str[m++];
				*p = '\0';
				ptr[k] = p - i;
				k++;
				i = 0;
			}
		}
		else if (i++ == 0)
			m = j;
	}

	ptr[k] = NULL;
	return (ptr);
}
