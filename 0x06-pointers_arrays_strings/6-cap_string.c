#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *cap_string - capitalise all words in a string
 * @str: string to be altered
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
