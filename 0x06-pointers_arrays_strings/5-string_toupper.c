#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_toupper - change all lowercase letters to uppercase
 *@str: string to be altered
 *
 * Return: string
 */

char *string_toupper(char *str)
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
